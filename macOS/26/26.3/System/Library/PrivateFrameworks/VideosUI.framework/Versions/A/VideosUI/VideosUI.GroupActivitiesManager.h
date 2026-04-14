@interface VideosUI.GroupActivitiesManager : NSObject <VUINowPlayingWindowDelegate> {
    void /* unknown type, empty encoding */ _isSessionActive;
    void /* unknown type, empty encoding */ isConfigured;
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
    void /* unknown type, empty encoding */ timingTracker;
    void /* unknown type, empty encoding */ currentlyPlayingSharedId;
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ modifyingActivityIdentifier;
    void /* unknown type, empty encoding */ metricsDictionary;
    void /* unknown type, empty encoding */ participantsCountMax;
    void /* unknown type, empty encoding */ participantsCount;
    void /* unknown type, empty encoding */ playerObserver;
    void /* unknown type, empty encoding */ playingObserver;
    void /* unknown type, empty encoding */ didPlayToEndObserver;
    void /* unknown type, empty encoding */ sharedPlayer;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldNowPlayingWindowDismiss;

@end
