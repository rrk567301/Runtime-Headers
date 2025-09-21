@interface CKSQLiteTOCImageInfoTable : CKSQLiteTOCBaseTable

+ (unsigned long long)dbVersion;
+ (Class)entryClass;
+ (id)logicalTableName;
+ (id)dbProperties;

- (id)enumerateImagesWithBlock:(id /* block */)a0;
- (BOOL)migrateEntryDataFromTable:(id)a0 entry:(id)a1 toEntry:(id)a2 addedProperties:(id)a3;
- (id)addEntriesForCurrentProcess;
- (id)databaseMatchesCurrentProcess;
- (id)resetImageInfo;
- (id)updateForCurrentProcess;

@end
