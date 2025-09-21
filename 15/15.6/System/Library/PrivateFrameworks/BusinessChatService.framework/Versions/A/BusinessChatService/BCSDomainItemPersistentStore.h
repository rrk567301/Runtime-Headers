@class NSString;

@interface BCSDomainItemPersistentStore : BCSPersistentStore <BCSDomainItemCaching>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)databasePath;
- (const char *)schema;
- (long long)schemaVersion;
- (void)deleteAllDomainItems;
- (void)deleteAllExpiredDomainItems;
- (void)deleteDomainItemMatching:(id)a0;
- (id)domainItemMatching:(id)a0;
- (char)executeDeleteDomainDomainItemSQLQuery:(id)a0;
- (void)updateDomainItem:(id)a0 withDomainItemIdentifier:(id)a1;
- (void)updateDomainItemsForDomainShard:(id)a0;

@end
