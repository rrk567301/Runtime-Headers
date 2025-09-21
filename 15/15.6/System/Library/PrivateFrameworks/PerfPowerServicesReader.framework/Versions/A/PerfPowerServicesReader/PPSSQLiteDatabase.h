@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface PPSSQLiteDatabase : NSObject {
    struct sqlite3 { } *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct __CFDictionary { } *_statementCache;
}

@property (readonly, copy, nonatomic) NSURL *databaseURL;

+ (char)_stepStatement:(struct sqlite3_stmt { } *)a0 hasRow:(char *)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)columnNamesForTable:(id)a0;
- (id)initWithDatabaseURL:(id)a0;
- (id)tableNames;
- (char)executeSQL:(id)a0 error:(id *)a1;
- (int)openForReadingWithError:(id *)a0;
- (char)executeSQL:(id)a0 shouldCache:(char)a1 error:(id *)a2 bindingHandler:(id /* block */)a3 enumerationHandler:(id /* block */)a4;
- (void)_accessDatabaseUsingBlock:(id /* block */)a0;
- (char)_prepareStatementForSQL:(id)a0 shouldCache:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (struct sqlite3_stmt { } *)_statementForSQL:(id)a0 shouldCache:(char)a1 error:(id *)a2;
- (void)clearStatementCache;
- (char)tableWithName:(id)a0 containsColumnWithName:(id)a1;
- (id)typeForColumn:(id)a0 inTable:(id)a1 error:(id *)a2;

@end
