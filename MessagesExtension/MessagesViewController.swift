//
//  MessagesViewController.swift
//  MessagesExtension
//
//  Created by Dustin Mallory on 2/28/17.
//  Copyright © 2017 Karmies. All rights reserved.
//

import UIKit
import Messages
import KarmiesSDK

class MessagesViewController: KarmiesMessagesAppViewController {
    
    override var clientID: String {
        
        // Provide client ID for Karmies stickers
        return "default"
    }
    
    override var monitorLocation: Bool {
        
        // Use location aware stickers
        return true
    }
}
