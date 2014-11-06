//
//  CoreDataPoweredTableViewController.h
//  WeatherWorld
//
//  Created by Francisco Caro Diaz on 06/11/14.
//  Copyright (c) 2014 ironhack. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface CoreDataPoweredTableViewController : UITableViewController
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

//PRIVATE PART, DON'T USE
#warning CLEAN UP THIS MESS
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSFetchRequest  *fetchRequest;
@property (nonatomic) CGFloat defaultCellHeight;
@end
