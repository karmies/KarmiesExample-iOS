//
//  AppDelegate.swift
//  KarmiesExample
//
//  Created by Dustin Mallory on 11/9/16.
//  Copyright © 2016 Karmies. All rights reserved.
//

import UIKit
import KarmiesSDK

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        
         // Configure Karmies on app launch
        Karmies.shared.configure(application: application, clientID: "default", monitorLocation: true, ready: {
            print("Karmies ready")
        }, complete: {
            print("Karmies complete")
        })
        
        return true
    }
    
    func applicationWillEnterForeground(_ application: UIApplication) {
        
        // Update Karmies on app resume
        Karmies.shared.update(reload: false, ready: {
            print("Karmies ready")
        }, complete: {
            print("karmies complete")
        })
    }
}
