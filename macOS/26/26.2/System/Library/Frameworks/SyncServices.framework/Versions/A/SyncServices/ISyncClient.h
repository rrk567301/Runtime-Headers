@interface ISyncClient : NSObject

- (id)filters;
- (id)lastSyncDate;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setFilters:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)clientIdentifier;
- (id)displayName;
- (void)setImagePath:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)clientType;
- (id)imagePath;
- (int)idNumber;
- (BOOL)canPullChangesForEntityName:(id)a0;
- (BOOL)canPushChangesForEntityName:(id)a0;
- (id)enabledEntityNames;
- (BOOL)formatsRelationships;
- (BOOL)isEnabledForEntityName:(id)a0;
- (id)lastSyncDateForEntityName:(id)a0;
- (unsigned int)lastSyncGeneration;
- (int)lastSyncStatusForEntityName:(id)a0;
- (void)setEnabled:(BOOL)a0 forEntityNames:(id)a1;
- (void)setFormatsRelationships:(BOOL)a0;
- (void)setShouldReplaceClientRecords:(BOOL)a0 forEntityNames:(id)a1;
- (void)setShouldSynchronize:(BOOL)a0 withClientsOfType:(id)a1;
- (void)setSyncAlertHandler:(id)a0 selector:(SEL)a1;
- (void)setSyncAlertToolPath:(id)a0;
- (void)setSyncsAfterClients:(BOOL)a0;
- (BOOL)shouldReplaceClientRecordsForEntityName:(id)a0;
- (BOOL)shouldSynchronizeWithClientsOfType:(id)a0;
- (id)supportedEntityNames;
- (id)syncAlertToolPath;
- (BOOL)syncsAfterClients;

@end
