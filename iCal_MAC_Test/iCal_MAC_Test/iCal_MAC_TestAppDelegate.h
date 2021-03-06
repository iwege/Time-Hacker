//
//  iCal_MAC_TestAppDelegate.h
//  iCal_MAC_Test
//
//  Created by artwalk on 4/29/14.
//  Copyright (c) 2014 artwalk. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import <EventKit/EventKit.h>

@interface iCal_MAC_TestAppDelegate : NSObject <NSApplicationDelegate, NSTableViewDataSource, NSTableViewDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTableView *ibTableView;
@property (weak) IBOutlet NSButton *ibButtonStartStop;
@property (weak) IBOutlet NSTextField *ibTextFieldTaskToDo;
@property (weak) IBOutlet NSTextField *ibTextFieldTime;
@property (weak) IBOutlet NSArrayController *ibArrayController;
@property (weak) IBOutlet NSTextFieldCell *ibTextFieldCell;
@property (weak) IBOutlet NSTableColumn *ibTableColumn;
@property (weak) IBOutlet NSButton *ibiReminders;
@property (weak) IBOutlet NSButton *ibiCalAnalytics;
@property (weak) IBOutlet NSProgressIndicator *ibCircularProgressIndicator;
@property (weak) IBOutlet NSSegmentedControl *ibSegmentedControl;
@property (weak) IBOutlet NSStepper *ibStepper;
@property (weak) IBOutlet NSDatePicker *ibStartDate;
@property (weak) IBOutlet NSDatePicker *ibEndDate;

@property EKEventStore* mEventStore;
@property EKEventStore* mReminderStore;
@property BOOL isStart;
@property NSDate *mStartDate;
@property NSDate *mEndDate;
@property NSString *mTitle;
//@property NSMutableDictionary *mMutableDictionary;
@property NSTimer *mCountingTimer;

@property int mPromoToDoInterval;

@end
