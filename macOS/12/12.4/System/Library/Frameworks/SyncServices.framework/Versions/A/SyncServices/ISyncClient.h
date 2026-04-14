@interface ISyncClient : NSObject

- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)displayName;
- (void)setFilters:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)filters;
- (id)lastSyncDate;
- (id)clientIdentifier;
- (id)clientType;
- (id)imagePath;
- (void)setImagePath:(id)a0;
- (unsigned int)lastSyncGeneration;
- (int)idNumber;
- (id)enabledEntityNames;
- (void)setSyncsAfterClients:(BOOL)a0;
- (BOOL)formatsRelationships;
- (void)setFormatsRelationships:(BOOL)a0;
- (BOOL)syncsAfterClients;
- (id)supportedEntityNames;
- (BOOL)shouldReplaceClientRecordsForEntityName:(id)a0;
- (BOOL)canPushChangesForEntityName:(id)a0;
- (BOOL)canPullChangesForEntityName:(id)a0;
- (id)lastSyncDateForEntityName:(id)a0;
- (int)lastSyncStatusForEntityName:(id)a0;
- (BOOL)isEnabledForEntityName:(id)a0;
- (void)setEnabled:(BOOL)a0 forEntityNames:(id)a1;
- (void)setShouldReplaceClientRecords:(BOOL)a0 forEntityNames:(id)a1;
- (BOOL)shouldSynchronizeWithClientsOfType:(id)a0;
- (void)setShouldSynchronize:(BOOL)a0 withClientsOfType:(id)a1;
- (id)syncAlertToolPath;
- (void)setSyncAlertToolPath:(id)a0;
- (void)setSyncAlertHandler:(id)a0 selector:(SEL)a1;

@end
