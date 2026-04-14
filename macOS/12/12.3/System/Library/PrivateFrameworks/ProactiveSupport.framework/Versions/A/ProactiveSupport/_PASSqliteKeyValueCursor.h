@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (BOOL)hasKey;
+ (const char *)sqliteCreateTableStatement;

- (BOOL)currentIndexEof;
- (id)outputKey;
- (id)currentIndexedKey;

@end
