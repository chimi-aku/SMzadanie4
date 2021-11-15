//
//  ViewController.h
//  zadanie4 LT
//
//  Created by student on 15/11/2021.
//  Copyright © 2021 wvffle.net. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *gestureLabel;

-(IBAction)tapGesture:(UITapGestureRecognizer *) sender;
-(IBAction)pinchGesture:(UIPinchGestureRecognizer *) sender;
-(IBAction)swipeGesture:(UISwipeGestureRecognizer *) sender;
-(IBAction)longPressGesture:(UILongPressGestureRecognizer *) sender;
@end

