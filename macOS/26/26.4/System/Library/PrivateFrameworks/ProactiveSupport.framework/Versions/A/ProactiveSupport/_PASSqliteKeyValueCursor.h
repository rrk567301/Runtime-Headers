@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (BOOL)hasKey;
+ (const char *)sqliteCreateTableStatement;

- (id)outputKey;
- (id)currentIndexedKey;
- (BOOL)currentIndexEof;

@end
