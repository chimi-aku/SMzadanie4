//
//  AppDelegate.h
//  zadanie4 LT
//
//  Created by student on 15/11/2021.
//  Copyright © 2021 wvffle.net. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

