//
//  ViewController.h
//  MathWidgetTest
//
//  Copyright (c) 2015 MyScript. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ATKMathWidget/MAWMathWidget.h>

@interface ViewController : UIViewController <MAWMathViewDelegate>

@property (strong, nonatomic) MAWMathView *mathView;
@property (assign, nonatomic) BOOL isValidCertificate;

- (void)clear;

@end
