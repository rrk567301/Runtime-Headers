@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor

+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasRowId;

- (unsigned long long)outputRowId;
- (BOOL)currentIndexEof;
- (unsigned long long)currentIndexedRowId;

@end
