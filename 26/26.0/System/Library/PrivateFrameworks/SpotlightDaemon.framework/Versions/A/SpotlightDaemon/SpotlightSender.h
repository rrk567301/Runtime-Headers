@interface SpotlightSender : NSObject

+ (void)deleteSearchableItemsInJournalFd:(int)a0 atOffset:(unsigned long long)a1 size:(unsigned long long)a2 indexType:(unsigned long long)a3 protectionClass:(id)a4 serialNumber:(unsigned long long)a5 journalCookie:(id)a6 client:(long long)a7 completionHandler:(id /* block */)a8;
+ (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2 retainedData:(id)a3;
+ (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (void)clearCache;
+ (void)reset;
+ (BOOL)jobForAssets:(long long)a0;
+ (void)setupInstantSender;
+ (id)connectionForClient:(long long)a0 jobType:(long long)a1;
+ (void)donateRelevantActions:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)deleteSearchableItemsWithEncodedIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (BOOL)jobForSuggestions:(long long)a0;
+ (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1 contentType:(id)a2 client:(long long)a3;
+ (void)suspend;
+ (void)deleteAllSearchableItemsWithBundleID:(id)a0 client:(long long)a1;
+ (id)copyDiagnosticInfo;
+ (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)deleteAllUserActivities:(id)a0 client:(long long)a1;
+ (void)dispatchWithOptions:(long long)a0 block:(id /* block */)a1;
+ (void)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (BOOL)jobForTextUnderstanding:(long long)a0;
+ (id)supportedConfigs;
+ (BOOL)jobForImages:(long long)a0;
+ (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (BOOL)enabledForClient:(long long)a0;
+ (id)clientConnection:(long long)a0 jobType:(int)a1;
+ (BOOL)jobForDuet:(long long)a0;
+ (void)addOrUpdateSearchableItemsInJournalFd:(int)a0 atOffset:(unsigned long long)a1 size:(unsigned long long)a2 indexType:(unsigned long long)a3 bundleID:(id)a4 protectionClass:(id)a5 serialNumber:(unsigned long long)a6 journalCookie:(id)a7 additionalAttributes:(id)a8 client:(long long)a9 config:(id)a10 completionHandler:(id /* block */)a11;
+ (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (void)addInteraction:(id)a0 intentClassName:(id)a1 bundleID:(id)a2 protectionClass:(id)a3 client:(long long)a4;
+ (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1 client:(long long)a2;
+ (id)clientConnection:(long long)a0;
+ (void)addOrUpdateSearchableItems:(id)a0 itemsContent:(id)a1 bundleID:(id)a2 protectionClass:(id)a3 client:(long long)a4;
+ (BOOL)jobForTest:(long long)a0;
+ (void)setupScheduledSender;
+ (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1 client:(long long)a2;

@end
