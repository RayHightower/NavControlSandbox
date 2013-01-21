//
//  DetailViewController.h
//  NavControlSandbox
//
//  Created by RTH on 1/20/13.
//  Copyright (c) 2013 WisdomGroup. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
// type id means this could be any item. This is a placeholder.

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (strong, nonatomic) IBOutlet UITextView *detailNote;

@end
