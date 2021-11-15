//
//  SecondViewController.h
//  zadanie4 LT
//
//  Created by student on 15/11/2021.
//  Copyright © 2021 wvffle.net. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
NS_ASSUME_NONNULL_BEGIN


@interface SecondViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    CLGeocoder *geocoder;
    CLPlacemark *placemark;
}

@property (weak, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *longtitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;

@property (weak, nonatomic) IBOutlet UITextField *latitudeText;
@property (weak, nonatomic) IBOutlet UITextField *longtitudeText;
@property (weak, nonatomic) IBOutlet UITextView *addressText;
@property (weak, nonatomic) IBOutlet UIButton *currentLocationButton;


-(IBAction)getCurrentLocation:(id)sender;

NS_ASSUME_NONNULL_END
