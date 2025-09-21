@interface CKDZoneIDCacheTable : CKSQLiteCacheTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)init;
- (id)entryForZoneID:(id)a0 addIfNotFound:(char)a1 error:(id *)a2;
- (char)removeRowID:(id)a0 error:(id *)a1;
- (id)rowIDForZoneID:(id)a0 addIfNotFound:(char)a1 error:(id *)a2;
- (id)zoneIDForRowID:(id)a0 error:(id *)a1;

@end
