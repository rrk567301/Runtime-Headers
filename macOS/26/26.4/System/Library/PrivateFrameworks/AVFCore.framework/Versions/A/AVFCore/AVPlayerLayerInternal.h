@class AVPlayerLayerSubtitlePreviewHelper, FigVideoContainerLayer, AVSinkSubscriber, NSDictionary, AVNetworkPlaybackPerfHUDLayer, NSObject, AVPlayerLayer, CALayer, AVKeyPathDependencyManager, NSString, FigBaseCALayer, AVPlayer, FigSubtitleCALayer;
@protocol OS_dispatch_queue, AVLoggingIdentifier;

@interface AVPlayerLayerInternal : NSObject {
    AVNetworkPlaybackPerfHUDLayer *hudLayer;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL isPresentationLayer;
    struct OpaqueFigSimpleMutex { } *isReadyForDisplayMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    AVKeyPathDependencyManager *dependencyManager;
    id playerItemHasEnqueuedVideoFrameListener;
    id windowSceneDidEnterBackgroundListener;
    id windowSceneWillEnterForegroundListener;
    AVPlayer *player;
    NSString *videoGravity;
    NSDictionary *pixelBufferAttributes;
    BOOL lanczosDownscalingEnabled;
    long long lanczosDownscalingFactor;
    FigBaseCALayer *maskLayer;
    FigVideoContainerLayer *videoLayer;
    FigSubtitleCALayer *subtitleLayer;
    CALayer *subtitlePreviewLayer;
    FigBaseCALayer *closedCaptionLayer;
    AVPlayerLayer *interstitialLayer;
    AVPlayerLayerSubtitlePreviewHelper *subtitlePreviewHelper;
    struct CGPoint { double x; double y; } captionPreviewPosition;
    BOOL isForScrubbingOnly;
    AVPlayerLayer *associatedRemoteModeLayer;
    BOOL willManageSublayersAsSwappedLayers;
    long long activeMode;
    BOOL showInterstitialInstead;
    BOOL overridesPreferredDynamicRangeForVideo;
    BOOL isReadyForDisplay;
    AVPlayer *playerBeingObserved;
    struct CGSize { double width; double height; } latestAppliedPresentationSize;
    BOOL preventsChangesToSublayerHierarchy;
    NSDictionary *clientLayers;
    BOOL isPIPModeEnabled;
    CALayer *placeholderContentLayerDuringPIPMode;
    BOOL isConnectedToSecondScreen;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } legibleContentInsets;
    BOOL honorContentScale;
    double screenScale;
    int lastWindowSceneEvent;
    BOOL isVisible;
    AVSinkSubscriber *playerCurrentItemSink;
    AVSinkSubscriber *currentItemPresentationSizeSink;
    AVSinkSubscriber *currentItemTracksSink;
    AVSinkSubscriber *currentItemNonForcedSubtitlesEnabledSink;
    AVSinkSubscriber *playerIsDisplayingClosedCaptionsSink;
    id<AVLoggingIdentifier> loggingIdentifier;
    id videoLayerIsReadyForDisplayDidChangeListener;
    id videoLayerPresentationSizeDidChangeListener;
}

@end
