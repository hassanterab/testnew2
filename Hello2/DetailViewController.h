//
//  DetailViewController.h
//  Hello2
//
//  Created by Hassan Terab on 3/27/13.
//  Copyright (c) 2013 Hassan Terab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
