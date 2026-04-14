@interface GameStoreKit.GSKVideoPlaybackCoordinator : NSObject {
    void /* unknown type, empty encoding */ videoViewModelManager;
    void /* unknown type, empty encoding */ isAutoPlayVideoSettingsEnabled;
    void /* unknown type, empty encoding */ isVideoAutoplayAccessibilityEnabled;
    void /* unknown type, empty encoding */ _isGlobalAutoPlayEnabled;
    void /* unknown type, empty encoding */ isAutoPlayEnabled;
    void /* unknown type, empty encoding */ isAutoPlayActive;
    void /* unknown type, empty encoding */ shouldLoopAutoPlayback;
    void /* unknown type, empty encoding */ metricsPipeline;
    void /* unknown type, empty encoding */ visibleVideoFrames;
    void /* unknown type, empty encoding */ autoPlayExclusions;
    void /* unknown type, empty encoding */ playbackQueue;
    void /* unknown type, empty encoding */ activePlaybackIndex;
    void /* unknown type, empty encoding */ activeVideo;
    void /* unknown type, empty encoding */ _isScrolling;
    void /* unknown type, empty encoding */ networkMonitorTask;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ isNetworkConstrained;
    void /* unknown type, empty encoding */ playbackCoalescingWaitTime;
    void /* unknown type, empty encoding */ playbackWorkItem;
}

- (id)init;
- (void).cxx_destruct;

@end
