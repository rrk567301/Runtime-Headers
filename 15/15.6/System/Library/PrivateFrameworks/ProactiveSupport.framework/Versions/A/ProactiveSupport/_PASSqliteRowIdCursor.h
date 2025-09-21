@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor

+ (char)hasRowId;
+ (const char *)sqliteCreateTableStatement;

- (char)currentIndexEof;
- (unsigned long long)currentIndexedRowId;
- (unsigned long long)outputRowId;

@end
