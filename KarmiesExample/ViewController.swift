//
//  ViewController.swift
//  KarmiesExample
//
//  Created by Dustin Mallory on 11/9/16.
//  Copyright © 2016 Karmies. All rights reserved.
//

import UIKit
import KarmiesSDK

class ViewController: UIViewController, UITableViewDataSource, UITableViewDelegate {
    
    @IBOutlet weak var messagesTableView: UITableView!
    @IBOutlet weak var inputTextView: UITextView!
    @IBOutlet weak var sendButton: UIButton!
    
    private var karmiesController: KarmiesController!
    
    private var messages = [String]()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Create controller for managing Karmies keyboard and automatically toggling the OS keyboard
        karmiesController = KarmiesController(hostInputTextView: inputTextView, toggleEmbeddedKeyboard: true, autoSuggest: true)
        
        // Reload messages when content changes
        karmiesController.messageWasChangedHandler = { [unowned self] (forced) in
            self.messagesTableView.reloadData()
        }
        
        // Use provided Karmies keyboard toggle button to the left of the input field
        KarmiesUtils.placeButton(karmiesController.keyboardToggleButton, onLeftOf: inputTextView, withPlaceholder: nil, in: inputTextView.superview)
        
        // Focus input field
        inputTextView.becomeFirstResponder()
    }
    
    @objc func tableAction(_ sender: UIGestureRecognizer) {
        let messageView = sender.view as! UITextView
        let messagePoint  = sender.location(in: messageView)
        if let messageLink = Karmies.shared.messages.link(at: messagePoint, in: messageView, outgoing: true) {
            if Karmies.shared.messages.isSerializedMessage(messageLink), let messageURL = URL(string: messageLink) {
                Karmies.shared.presentViewFeatureController(with: messageURL)
            }
        }
    }
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return messages.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "Message", for: indexPath) as! TableViewCell
        let serializedText = messages[indexPath.row]
        
        // Deserialize any Karmies URLs in plain message text to form an attributed string for display
        cell.textView?.text = ""
        Karmies.shared.messages.deserializeMessage(serializedText, outgoing: true) { (attributedText) in
            cell.textView?.attributedText = attributedText
        }
        
        // Open Karmies in messages on tap
        let tapGestureRecognizer = UITapGestureRecognizer(target: self, action: #selector(self.tableAction(_:)))
        cell.textView?.addGestureRecognizer(tapGestureRecognizer)
        cell.textView?.isUserInteractionEnabled = true
        cell.textView?.tag = indexPath.row
        
        return cell
    }
    
    func tableView(_ tableView: UITableView, willDisplay cell: UITableViewCell, forRowAt indexPath: IndexPath) {
        let serializedText = messages[indexPath.row]
        
        // Send impression analytics when displayed
        Karmies.shared.analytics.sendMessageImpressionEvents(message: serializedText, isSent: true)
    }
    
    @IBAction func sendAction(_ sender: Any) {
        if let attributedText = inputTextView.attributedText , attributedText.length > 0 {
            
            // Serialize attributed text with any Karmies embedded into plain text with URLs
            let serializedText = Karmies.shared.messages.serializeMessage(from: attributedText)
            
            messages.append(serializedText)
            inputTextView.text = ""
            messagesTableView.reloadData()
        }
    }
}
