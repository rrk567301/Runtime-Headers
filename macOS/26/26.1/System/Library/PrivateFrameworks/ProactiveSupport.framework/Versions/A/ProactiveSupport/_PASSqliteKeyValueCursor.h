@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasKey;

- (id)outputKey;
- (id)currentIndexedKey;
- (BOOL)currentIndexEof;

@end
