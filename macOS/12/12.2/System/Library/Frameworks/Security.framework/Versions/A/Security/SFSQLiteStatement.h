@class SFSQLite, NSMutableArray, NSString;

@interface SFSQLiteStatement : NSObject

@property (retain, nonatomic) NSMutableArray *temporaryBoundObjects;
@property (readonly, weak, nonatomic) SFSQLite *SQLite;
@property (readonly, nonatomic) NSString *SQL;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (nonatomic, getter=isReset) BOOL reset;

- (id)objectAtIndex:(unsigned long long)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)columnCount;
- (id)initWithSQLite:(id)a0 SQL:(id)a1 handle:(struct sqlite3_stmt { } *)a2;
- (void)finalizeStatement;
- (void)resetAfterStepError;
- (BOOL)step;
- (void)bindInt:(int)a0 atIndex:(unsigned long long)a1;
- (void)bindInt64:(long long)a0 atIndex:(unsigned long long)a1;
- (void)bindDouble:(double)a0 atIndex:(unsigned long long)a1;
- (void)bindBlob:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindNullAtIndex:(unsigned long long)a0;
- (id)retainedTemporaryBoundObject:(id)a0;
- (void)bindValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindValues:(id)a0;
- (int)columnTypeAtIndex:(unsigned long long)a0;
- (id)columnNameAtIndex:(unsigned long long)a0;
- (int)intAtIndex:(unsigned long long)a0;
- (long long)int64AtIndex:(unsigned long long)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (id)blobAtIndex:(unsigned long long)a0;
- (id)textAtIndex:(unsigned long long)a0;
- (id)allObjectsByColumnName;

@end
