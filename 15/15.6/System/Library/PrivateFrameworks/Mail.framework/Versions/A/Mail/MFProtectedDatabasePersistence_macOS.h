@interface MFProtectedDatabasePersistence_macOS : EDProtectedDatabasePersistence

+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;

- (char)supportsJournaling;
- (char)protectedDataAvailable;

@end
