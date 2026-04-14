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

+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresBatchedFirstSync;
+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (BOOL)requiresPushNotificationSupport;

- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)hasMemberships;
- (id)membershipChannelIDs;
- (BOOL)isMemberOfChannelID:(id)a0;
- (void)addObserver:(id)a0;
- (void)isAllowedToSeeIssueID:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (void)isAllowedToSeeArticleID:(id)a0 completionBlock:(id /* block */)a1;
- (id)feedDescriptorForDraftFeedForChannel:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeForeground;

@end
