@class NSString, NSDictionary, NSMutableSet, FCMTWriterLock;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {
    NSDictionary *_membershipsByChannelID;
    NSMutableSet *_membershipReferences;
    FCMTWriterLock *_membershipsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)commandQueueUrgency;
+ (id)desiredKeys;
+ (id)commandStoreFileName;
+ (BOOL)requiresBatchedFirstSync;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;

- (void)loadLocalCachesFromStore;
- (void)dealloc;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)a0;
- (void)removeObserver:(id)a0;
- (void)isAllowedToSeeIssueID:(id)a0 completionBlock:(id /* block */)a1;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)feedDescriptorForDraftFeedForChannel:(id)a0;
- (BOOL)hasMemberships;
- (void)addObserver:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)isAllowedToSeeArticleID:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (id)membershipChannelIDs;
- (BOOL)isMemberOfChannelID:(id)a0;
- (void).cxx_destruct;

@end
