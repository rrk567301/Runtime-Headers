@interface VUIGroupActivitiesManagerObjC : NSObject

@property (class, nonatomic, readonly) BOOL isConfigured;
@property (class, nonatomic, readonly) BOOL isSessionActive;
@property (class, nonatomic, readonly) BOOL isEligibleForSession;
@property (class, nonatomic, readonly) BOOL isQuickStartupEnabled;

+ (void)leaveSession;
+ (void)requestForegroundPresentation;
+ (void)playerDidStart:(id)a0;
+ (void)allPlaybackDidEnd;
+ (void)endSessionWithReason:(long long)a0;
+ (BOOL)handleCommerceSharedWatchUrl:(id)a0;
+ (void)handleSharedPlayable:(id)a0 watchTogetherUrl:(id)a1 startupAction:(long long)a2 previewMetadata:(id)a3 completion:(id /* block */)a4;
+ (BOOL)isSharedWatchIdValidForCurrentSession:(id)a0;
+ (id)itemProviderForActivityWithPlayable:(id)a0 previewMetadata:(id)a1 existingItemProvider:(id)a2;
+ (id)itemProviderForActivityWithSharedWatchId:(id)a0 sharedWatchUrl:(id)a1 previewMetadata:(id)a2 existingItemProvider:(id)a3;
+ (void)requestPermissionToStartCowatchingForPlayable:(id)a0 completion:(id /* block */)a1;
+ (void)startPlaybackFailed;

- (id)init;

@end
