@class NSURL, VUIVideosPlayable, VUIGroupWatchActivityPreviewMetadata;

@interface VideosUI.GroupActivitiesManager : NSObject <VUIGroupActivitiesManagerDelegate, VUINowPlayingWindowDelegate> {
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ signpostState;
    void /* unknown type, empty encoding */ _session;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sessionStateObserver;
    void /* unknown type, empty encoding */ sessionActivityObserver;
    void /* unknown type, empty encoding */ sessionActivityParticipantsObserver;
    void /* unknown type, empty encoding */ dismissDelayTimer;
    void /* unknown type, empty encoding */ endSessionReason;
    void /* unknown type, empty encoding */ repeatSuspension;
    void /* unknown type, empty encoding */ messenger;
    void /* unknown type, empty encoding */ messengerTask;
    void /* unknown type, empty encoding */ currentlyPlayingSharedId;
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ modifyingActivityIdentifier;
    void /* unknown type, empty encoding */ _isSessionActive;
    void /* unknown type, empty encoding */ metricsDictionary;
    void /* unknown type, empty encoding */ participantsCountMax;
    void /* unknown type, empty encoding */ participantsCount;
    void /* unknown type, empty encoding */ playerObserver;
    void /* unknown type, empty encoding */ playingObserver;
    void /* unknown type, empty encoding */ didPlayToEndObserver;
    void /* unknown type, empty encoding */ sharedPlayer;
}

@property (nonatomic, readonly) char isEligibleForSession;
@property (nonatomic) char isSessionActive;

- (id)init;
- (void).cxx_destruct;
- (void)leaveSession;
- (void)requestForegroundPresentation;
- (void)playerDidStart:(id)a0;
- (void)allPlaybackDidEnd;
- (void)endSessionWithReason:(unsigned long long)a0;
- (char)handleCommerceSharedWatchUrl:(id)a0;
- (void)handleSharedPlayable:(VUIVideosPlayable *)a0 watchTogetherUrl:(NSURL *)a1 startupAction:(long long)a2 previewMetadata:(VUIGroupWatchActivityPreviewMetadata *)a3 completion:(void (^)(unsigned long long))a4;
- (char)isSharedWatchIdValidForCurrentSession:(id)a0;
- (id)itemProviderForActivityWithSharedWatchId:(id)a0 sharedWatchUrl:(id)a1 previewMetadata:(id)a2 existingItemProvider:(id)a3;
- (void)requestPermissionToStartCowatchingForPlayable:(id)a0 completion:(id /* block */)a1;
- (char)shouldNowPlayingWindowDismiss;
- (void)startPlaybackFailed;

@end
