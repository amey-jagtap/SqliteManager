//
//  SQLite.h
//  UkTenants
//
//  Created by Amey Jagtap on 05/06/14.
//  Copyright (c) 2014 Benchmark It Solutions LLC All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@interface SQLite : NSObject
{
    sqlite3 *database;
}

@property(nonatomic, readwrite)sqlite3 *database;
+ (SQLite *)sharedSingleton;
@end
