@class AVPlayer, AVNetworkPlaybackPerfHUDLayer, NSString, FigVideoContainerLayer, FigSubtitleCALayer, CALayer, NSDictionary, AVSinkSubscriber, AVKeyPathDependencyManager, NSObject, AVPlayerLayer, FigBaseCALayer;
@protocol OS_dispatch_queue;

@interface AVPlayerLayerInternal : NSObject {
    AVNetworkPlaybackPerfHUDLayer *hudLayer;
    NSObject<OS_dispatch_queue> *serialQueue;
    char isPresentationLayer;
    struct OpaqueFigSimpleMutex { } *isReadyForDisplayMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    AVKeyPathDependencyManager *dependencyManager;
    id playerItemHasEnqueuedVideoFrameListener;
    id windowSceneDidEnterBackgroundListener;
    id windowSceneWillEnterForegroundListener;
    AVPlayer *player;
    NSString *videoGravity;
    NSDictionary *pixelBufferAttributes;
    char lanczosDownscalingEnabled;
    long long lanczosDownscalingFactor;
    FigBaseCALayer *maskLayer;
    FigVideoContainerLayer *videoLayer;
    FigSubtitleCALayer *subtitleLayer;
    FigBaseCALayer *closedCaptionLayer;
    AVPlayerLayer *interstitialLayer;
    char isForScrubbingOnly;
    AVPlayerLayer *associatedRemoteModeLayer;
    char willManageSublayersAsSwappedLayers;
    long long activeMode;
    char showInterstitialInstead;
    char isReadyForDisplay;
    AVPlayer *playerBeingObserved;
    struct CGSize { double width; double height; } latestAppliedPresentationSize;
    char preventsChangesToSublayerHierarchy;
    NSDictionary *clientLayers;
    char isPIPModeEnabled;
    CALayer *placeholderContentLayerDuringPIPMode;
    char isConnectedToSecondScreen;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } legibleContentInsets;
    char honorContentScale;
    double screenScale;
    int lastWindowSceneEvent;
    char isVisible;
    AVSinkSubscriber *playerCurrentItemSink;
    AVSinkSubscriber *currentItemPresentationSizeSink;
    AVSinkSubscriber *currentItemTracksSink;
    AVSinkSubscriber *currentItemNonForcedSubtitlesEnabledSink;
    AVSinkSubscriber *playerIsDisplayingClosedCaptionsSink;
}

@end
