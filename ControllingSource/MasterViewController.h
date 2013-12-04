//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Aleksandr Konakov on 04/12/13.
//  Copyright (c) 2013 Aleksandr Konakov. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
