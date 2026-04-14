@class NSString, _TtC18PodcastsFoundation18SyncKeysRepository;

@interface PodcastsFoundation.SyncKeysRepository : NSObject {
    void /* unknown type, empty encoding */ syncKeysStore;
}

@property (class, nonatomic, readonly) BOOL shouldSyncInReadOnlyMode;
@property (class, nonatomic, readonly) _TtC18PodcastsFoundation18SyncKeysRepository *shared;

@property (nonatomic) BOOL isSubscriptionSyncV1Dirty;
@property (nonatomic) BOOL isSubscriptionSyncV3Dirty;
@property (nonatomic) BOOL isNonFollowedShowsSyncDirty;
@property (nonatomic) BOOL isPlaylistSyncDirty;
@property (nonatomic) BOOL isBookmarksSyncDirty;
@property (nonatomic) BOOL isBookmarksDRMSyncDirty;
@property (nonatomic, copy) NSString *nonFollowedShowsSyncVersion;
@property (nonatomic, copy) NSString *podcastsDomainVersion;
@property (nonatomic) BOOL isSubscriptionSyncEnabled;

- (BOOL)isBookmarksSyncDirtyFor:(long long)a0;
- (BOOL)isSubscriptionSyncDirtyFor:(long long)a0;
- (void)markBookmarksSyncDirty:(BOOL)a0 for:(long long)a1;
- (void)markSubscriptionSyncDirty:(BOOL)a0 for:(long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
