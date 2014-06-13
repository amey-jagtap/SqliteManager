//
//  SQLiteManager.h
//  UkTenants
//
//  Created by Amey Jagtap on 05/06/14.
//  Copyright (c) 2014 Benchmark It Solutions LLC All rights reserved.


#import <Foundation/Foundation.h>
#import <sqlite3.h>

#define DataBaseName @"sample.sqlite"

@interface SQLiteManager : NSObject
{

    sqlite3 *database;
}


+ (sqlite3_stmt *)dbQuery:(NSString *)QueryToBeExecuted;
+ (void)checkQueryStatus:(sqlite3_stmt *)compiledStatement;
+ (int)lastAffectedRow;
+ (void)dbClose;
+ (void)dbOpen:(NSString *)databasePath;
+ (sqlite3_stmt *)fetchNextRecord:(sqlite3_stmt *)compiledStatement;
+ (void)finishQuery:(sqlite3_stmt *)compiledStatement;
+ (int)getInt:(sqlite3_stmt *)compiledStatement columnIndex:(int)_index;
+ (float)getFloat:(sqlite3_stmt *)compiledStatement columnIndex:(int)_index;
+ (NSString *)getString:(sqlite3_stmt *)compiledStatement columnIndex:(int)_index;
+ (NSString *)getDatabasePath;
+ (int)executeQuerySubQuery:(NSString *)_query;
+ (int)executeQuery:(NSString *)_query;
+ (BOOL)beginTransactionWithDatabase;
+ (BOOL)endTransactionWithDatabase;
+ (sqlite3_stmt *)olddbQuery:(NSString *)QueryToBeExecuted;

+ (void)removeNGetDatabasePath;
@end
