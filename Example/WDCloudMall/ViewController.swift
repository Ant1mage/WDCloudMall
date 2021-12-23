//
//  ViewController.swift
//  WDCloudMall
//
//  Created by zoumin on 12/16/2021.
//  Copyright (c) 2021 zoumin. All rights reserved.
//

import UIKit
import WDCloudMall

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        WDCloudMall.shared.notice = self
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

extension ViewController: WDCMNoticeDelegate {
    func wdcmNoticeLogin(_ view: WDCloudMallContainer) {
        
    }
    
    func wdcmNoticeLogout(_ view: WDCloudMallContainer) {
        
    }
    
    func wdcmNoticeShare(_ view: WDCloudMallContainer, parameters: [String : Any]?) {
        
    }
    
    func wdcmNoticeOpenURL(_ url: URL) {
        
    }
}

