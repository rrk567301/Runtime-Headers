@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (char)hasKey;
+ (const char *)sqliteCreateTableStatement;

- (char)currentIndexEof;
- (id)currentIndexedKey;
- (id)outputKey;

@end
