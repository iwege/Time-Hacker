//
//  iCalTestViewController.h
//  iCalTest
//
//  Created by artwalk on 4/29/14.
//  Copyright (c) 2014 artwalk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iCalTestViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *myData;
}

@property (nonatomic,retain) NSArray *myData;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end