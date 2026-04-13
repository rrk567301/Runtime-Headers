@class NSArray, NSObject;
@protocol OS_dispatch_queue, SYLinkableContentItemFinderDelegate;

@interface SYLinkableContentItemFinder : NSObject

@property (copy, nonatomic) NSArray *_foregroundAppBundleIDs;
@property (nonatomic) long long _foregroundAppLoadRetriesRemaining;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_itemFinderQueue;
@property (weak) id<SYLinkableContentItemFinderDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)fetchLinkableContentItemsExcludingActivities:(id)a0 completion:(id /* block */)a1;
- (void)_fetchActiveLinkableUserActivitiesExcluding:(id)a0 completion:(id /* block */)a1;
- (id)_currentForegroundAppBundleIDs;
- (BOOL)_shouldIncludeAsLinkableUserActivity:(id)a0 bundleID:(id)a1 foregroundBundleIDs:(id)a2 excludedActivities:(id)a3;
- (void)_activityFetchingFinishedWithActivities:(id)a0 appBundleIDs:(id)a1 foregroundBundleIDs:(id)a2 completion:(id /* block */)a3;
- (void)_updateForegroundApplications:(id)a0;
- (void)handleRemoteCurrentActivityDidChange;

@end
