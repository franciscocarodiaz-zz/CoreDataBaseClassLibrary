//
//  CoreDataFetchResultsControllerHelper.h
//  WeatherWorld
//
//  Created by Francisco Caro Diaz on 06/11/14.
//  Copyright (c) 2014 ironhack. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface CoreDataFetchResultsControllerHelper : NSObject<NSFetchedResultsControllerDelegate>
- (instancetype)initWithTableView:(UITableView *)tableview andBlockToUpdateCells:(void (^)(NSIndexPath *))block;
@end
