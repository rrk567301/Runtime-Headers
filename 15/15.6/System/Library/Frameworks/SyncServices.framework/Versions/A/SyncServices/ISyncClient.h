@interface ISyncClient : NSObject

- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (id)filters;
- (void)setFilters:(id)a0;
- (id)clientIdentifier;
- (id)lastSyncDate;
- (id)clientType;
- (id)imagePath;
- (void)setImagePath:(id)a0;
- (int)idNumber;
- (char)canPullChangesForEntityName:(id)a0;
- (char)canPushChangesForEntityName:(id)a0;
- (id)enabledEntityNames;
- (char)formatsRelationships;
- (char)isEnabledForEntityName:(id)a0;
- (id)lastSyncDateForEntityName:(id)a0;
- (unsigned int)lastSyncGeneration;
- (int)lastSyncStatusForEntityName:(id)a0;
- (void)setEnabled:(char)a0 forEntityNames:(id)a1;
- (void)setFormatsRelationships:(char)a0;
- (void)setShouldReplaceClientRecords:(char)a0 forEntityNames:(id)a1;
- (void)setShouldSynchronize:(char)a0 withClientsOfType:(id)a1;
- (void)setSyncAlertHandler:(id)a0 selector:(SEL)a1;
- (void)setSyncAlertToolPath:(id)a0;
- (void)setSyncsAfterClients:(char)a0;
- (char)shouldReplaceClientRecordsForEntityName:(id)a0;
- (char)shouldSynchronizeWithClientsOfType:(id)a0;
- (id)supportedEntityNames;
- (id)syncAlertToolPath;
- (char)syncsAfterClients;

@end
