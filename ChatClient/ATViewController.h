//
//  ATViewController.h
//  ChatClient
//
//  Created by Artur on 25.08.14.
//  Copyright (c) 2014 Artur Igberdin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ATViewController : UIViewController <NSStreamDelegate, UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSInputStream *inputStream;
@property (nonatomic, strong) NSOutputStream *outputStream;

@property (weak, nonatomic) IBOutlet UITextField *inputNameField;
@property (weak, nonatomic) IBOutlet UITextField *inputMessageField;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (nonatomic, strong) NSMutableArray *messages;

@property (weak, nonatomic) IBOutlet UIView *joinView;
@property (weak, nonatomic) IBOutlet UIView *chatView;

- (IBAction)joinChatButton:(id)sender;
- (IBAction)sendMessageButton:(id)sender;


@end
