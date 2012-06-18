//
//  HelloWorldViewController.h
//  first-iOS-app
//
//  Created by David Hopp on 6/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *greetingLabel;
@property (copy, nonatomic) NSString *userName;

@end
