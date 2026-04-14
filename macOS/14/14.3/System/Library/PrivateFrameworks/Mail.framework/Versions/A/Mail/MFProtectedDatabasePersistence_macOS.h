@interface MFProtectedDatabasePersistence_macOS : EDProtectedDatabasePersistence

+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;

- (BOOL)protectedDataAvailable;
- (BOOL)supportsJournaling;

@end
