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
        
        KarmiesContext.shared.configure(clientID: "default", requestLocation: true, ready: {
            print("Karmies ready")
        }, complete: {
            print("Karmies complete")
        })
        return true
    }

    func applicationWillResignActive(_ application: UIApplication) {
    }

    func applicationDidEnterBackground(_ application: UIApplication) {
    }

    func applicationWillEnterForeground(_ application: UIApplication) {
        KarmiesContext.shared.load(reload: false, ready: {
            print("Karmies ready")
        }, complete: {
            print("karmies complete")
        })
    }

    func applicationDidBecomeActive(_ application: UIApplication) {
    }

    func applicationWillTerminate(_ application: UIApplication) {
    }
}
