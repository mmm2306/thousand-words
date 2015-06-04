//
//  Photo.h
//  Thousand Words Final
//
//  Created by Marian Mihai Motroc on 5/27/15.
//  Copyright (c) 2015 Marian Mihai Motroc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Album;

@interface Photo : NSManagedObject

@property (nonatomic, retain) id image;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) Album *albumBook;

@end
