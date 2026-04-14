@interface ISyncClient : NSObject

- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)displayName;
- (id)filters;
- (void)setDisplayName:(id)a0;
- (void)setFilters:(id)a0;
- (id)lastSyncDate;
- (id)clientIdentifier;
- (id)clientType;
- (id)imagePath;
- (void)setImagePath:(id)a0;
- (id)supportedEntityNames;
- (int)idNumber;
- (BOOL)canPushChangesForEntityName:(id)a0;
- (BOOL)canPullChangesForEntityName:(id)a0;
- (id)lastSyncDateForEntityName:(id)a0;
- (int)lastSyncStatusForEntityName:(id)a0;
- (id)enabledEntityNames;
- (BOOL)isEnabledForEntityName:(id)a0;
- (void)setEnabled:(BOOL)a0 forEntityNames:(id)a1;
- (BOOL)shouldReplaceClientRecordsForEntityName:(id)a0;
- (void)setShouldReplaceClientRecords:(BOOL)a0 forEntityNames:(id)a1;
- (BOOL)shouldSynchronizeWithClientsOfType:(id)a0;
- (void)setShouldSynchronize:(BOOL)a0 withClientsOfType:(id)a1;
- (id)syncAlertToolPath;
- (void)setSyncAlertToolPath:(id)a0;
- (BOOL)syncsAfterClients;
- (void)setSyncsAfterClients:(BOOL)a0;
- (void)setSyncAlertHandler:(id)a0 selector:(SEL)a1;
- (BOOL)formatsRelationships;
- (void)setFormatsRelationships:(BOOL)a0;
- (unsigned int)lastSyncGeneration;

@end
