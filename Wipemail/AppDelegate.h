//
//  AppDelegate.h
//  Wipemail
//
//  Created by Vikram Grewal on 12/27/18.
//  Copyright © 2018 Vikram Grewal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

