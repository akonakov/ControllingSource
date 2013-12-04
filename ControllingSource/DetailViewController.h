//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Aleksandr Konakov on 04/12/13.
//  Copyright (c) 2013 Aleksandr Konakov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
