@interface CKSQLiteTOCImageInfoTable : CKSQLiteTOCBaseTable

+ (unsigned long long)dbVersion;
+ (id)dbProperties;
+ (Class)entryClass;
+ (id)logicalTableName;

- (BOOL)migrateEntryDataFromTable:(id)a0 entry:(id)a1 toEntry:(id)a2 addedProperties:(id)a3;
- (id)enumerateImagesWithBlock:(id /* block */)a0;
- (id)addEntriesForCurrentProcess;
- (id)databaseMatchesCurrentProcess;
- (id)resetImageInfo;
- (id)updateForCurrentProcess;

@end
