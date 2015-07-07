//
//  ToDoItem.h
//  ToDoList
//
//  Created by Mauro Pisu on 03/07/15.
//  Copyright (c) 2015 Mauro Pisu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
