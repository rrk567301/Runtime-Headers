@class NSString, NSArray, NSMutableDictionary, FCMTWriterLock;

@interface FCIssueReadingHistory : FCPrivateDataController <FCIssueReadingHistoryType, FCClearableReadingHistory> {
    NSMutableDictionary *_itemsByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSString *mostRecentlyVisitedIssueID;
@property (readonly, nonatomic) NSArray *recentlyVisitedIssueIDs;
@property (readonly, nonatomic) NSArray *recentlyEngagedIssueIDs;
@property (readonly, nonatomic) NSArray *allEngagedIssueIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresPushNotificationSupport;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedFirstSync;

- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)a0;
- (void)clearHistory;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (id)bookmarkForLastVisitToIssueWithID:(id)a0;
- (BOOL)hasIssueWithIDBeenEngaged:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (BOOL)hasIssueWithIDBeenVisited:(id)a0;
- (BOOL)hasIssueWithIDBeenSeen:(id)a0;
- (void)markIssueAsEngagedWithID:(id)a0;
- (void)markIssueAsBadgedWithID:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (BOOL)hasIssueWithIDBeenBadged:(id)a0;
- (id)lastSeenDateForIssueWithID:(id)a0;
- (void).cxx_destruct;
- (id)lastVisitedDateForIssueWithID:(id)a0;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)a0;
- (void)removeObserver:(id)a0;
- (void)markIssueWithID:(id)a0 asVisitedWithBookmark:(id)a1;
- (id)lastEngagedDateForIssueWithID:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)addObserver:(id)a0;
- (void)markIssueAsSeenWithID:(id)a0;

@end
