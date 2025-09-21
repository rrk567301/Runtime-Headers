@interface CKDPCSSQLCacheTable : CKSQLiteCacheTable

+ (Class)entryClass;
+ (id)objectClassesForProperty:(id)a0;
+ (id)dbProperties;
+ (double)cacheValidTime;

- (id)deletePCSDataForID:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 accountID:(id)a3 serviceName:(id)a4;
- (id)deletePCSDataForZone:(id)a0 account:(id)a1 serviceName:(id)a2;
- (id)deletePCSDataForShare:(id)a0 account:(id)a1 serviceName:(id)a2;
- (id)init;
- (id)PCSDataForID:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 accountID:(id)a3 serviceName:(id)a4;

@end
