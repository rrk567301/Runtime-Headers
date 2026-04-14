@class NSString, VUIVideosPlayable, NSURL, VUIGroupWatchActivityPreviewMetadata;

@interface VideosUI.GroupActivitiesManager : NSObject <VUINowPlayingWindowDelegate, VUIGroupActivitiesManagerDelegate> {
    void /* unknown type, empty encoding */ _session;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sessionStateObserver;
    void /* unknown type, empty encoding */ sessionActivityObserver;
    void /* unknown type, empty encoding */ sessionActivityParticipantsObserver;
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ modifyingActivityIdentifier;
    void /* unknown type, empty encoding */ _isSessionActive;
    void /* unknown type, empty encoding */ metricsDictionary;
    void /* unknown type, empty encoding */ participantsCountMax;
    void /* unknown type, empty encoding */ participantsCount;
    void /* unknown type, empty encoding */ playerObserver;
    void /* unknown type, empty encoding */ sharedPlayer;
}

@property (nonatomic, readonly) BOOL isEligibleForSession;
@property (nonatomic) BOOL isSessionActive;

- (void)endSession;
- (void)leaveSession;
- (BOOL)isSharedWatchIdValidForCurrentSession:(id)a0;
- (void)startPlaybackFailed;
- (void)requestPermissionToStartCowatchingForPlayable:(id)a0 completion:(id /* block */)a1;
- (void)handleWithWatchTogetherUrl:(NSURL *)a0 identifier:(NSString *)a1 startupAction:(long long)a2 previewMetadata:(VUIGroupWatchActivityPreviewMetadata *)a3 completion:(void (^)(unsigned long long))a4;
- (void)handleSharedPlayable:(VUIVideosPlayable *)a0 startupAction:(long long)a1 previewMetadata:(VUIGroupWatchActivityPreviewMetadata *)a2 completion:(void (^)(unsigned long long))a3;
- (BOOL)shouldNowPlayingWindowDismiss;
- (void)handleCommerceSharedWatchUrl:(id)a0;
- (void)playerDidStart:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
