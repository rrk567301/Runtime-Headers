@interface MFProtectedDatabasePersistence_macOS : EDProtectedDatabasePersistence

+ (id)protectedDatabaseName;
+ (id)journalDatabaseName;

- (BOOL)protectedDataAvailable;
- (BOOL)supportsJournaling;

@end
