@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasKey;

- (BOOL)currentIndexEof;
- (id)outputKey;
- (id)currentIndexedKey;

@end
