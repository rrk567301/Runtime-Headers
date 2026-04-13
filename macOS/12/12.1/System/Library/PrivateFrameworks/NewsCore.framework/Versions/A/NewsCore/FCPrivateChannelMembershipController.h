@class NSString, NSDictionary, NSMutableSet;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {
    NSDictionary *_membershipsByChannelID;
    NSMutableSet *_membershipReferences;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)isAllowedToSeeIssueID:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)a0;
- (BOOL)isMemberOfChannelID:(id)a0;
- (id)feedDescriptorForDraftFeedForChannel:(id)a0;
- (void)isAllowedToSeeArticleID:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)hasMemberships;
- (id)membershipChannelIDs;

@end
