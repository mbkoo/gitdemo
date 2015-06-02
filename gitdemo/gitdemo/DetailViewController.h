//
//  DetailViewController.h
//  gitdemo
//
//  Created by 古佰塘 on 15/6/2.
//  Copyright (c) 2015年 tzb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

