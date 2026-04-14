@class NSDictionary, ValidDBObjc, NSString;

@interface ValidDBStmt : NSObject <ValidDBRow>

@property (retain) ValidDBObjc *db;
@property struct sqlite3_stmt { } *stmt;
@property BOOL needReset;
@property (retain, nonatomic) NSDictionary *indexesByColumnName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)indexForColumnName:(id)a0;
- (unsigned long long)columnCount;
- (id)allObjectsByColumnName;
- (id)textAtColumn:(unsigned long long)a0;
- (double)doubleAtColumn:(unsigned long long)a0;
- (id)allObjects;
- (void)clearBindings;
- (void).cxx_destruct;
- (long long)int64AtColumn:(unsigned long long)a0;
- (void)reset;
- (void)enumerateColumnsUsingBlock:(id /* block */)a0;
- (void)dealloc;
- (void)bindInt:(int)a0 column:(unsigned long long)a1;
- (id)objectAtColumn:(unsigned long long)a0;
- (void)bindData:(id)a0 column:(unsigned long long)a1;
- (void)bindDate:(id)a0 column:(unsigned long long)a1;
- (void)bindDouble:(double)a0 column:(unsigned long long)a1;
- (void)bindInt64:(long long)a0 column:(unsigned long long)a1;
- (void)bindNullAtColumn:(unsigned long long)a0;
- (void)bindString:(id)a0 column:(unsigned long long)a1;
- (id)blobAtColumn:(unsigned long long)a0;
- (id)columnNameAtColumn:(unsigned long long)a0;
- (int)columnTypeAtColumn:(unsigned long long)a0;
- (id)dateAtColumn:(unsigned long long)a0;
- (id)generateDone;
- (id)generateError:(int)a0 method:(id)a1;
- (id)initWithStatement:(id)a0 db:(id)a1 error:(id *)a2;
- (int)intAtColumn:(unsigned long long)a0;
- (id)stepWithError:(id *)a0;
- (BOOL)steps:(id /* block */)a0 error:(id *)a1;

@end
