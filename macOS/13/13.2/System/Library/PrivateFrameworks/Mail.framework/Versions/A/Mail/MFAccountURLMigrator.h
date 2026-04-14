@interface MFAccountURLMigrator : NSObject

+ (id)accountURLStringWithIdentifierFromSystemAccount:(id)a0 syncable:(BOOL)a1;
+ (id)connectionHostnameAccountURLStringFromSystemAccount:(id)a0;
+ (id)accountURLStringFromV1V2PersistenceAccountAttributes:(id)a0 syncable:(BOOL)a1;

@end
