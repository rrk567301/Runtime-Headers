@class AVSampleBufferDisplayLayerPlayerController, CALayer, AVSampleBufferDisplayLayer, CALayerHost, AVPictureInPictureIndicatorLayer, AVObservationController, AVPictureInPictureSampleBufferDisplayLayerHostView;

@interface AVPictureInPictureSampleBufferDisplayLayerView : AVPictureInPicturePlayerLayerView

@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVSampleBufferDisplayLayerPlayerController *playerController;
@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *placeholderLayer;
@property (retain, nonatomic) AVPictureInPictureSampleBufferDisplayLayerHostView *sbdlHostView;
@property (retain, nonatomic) CALayerHost *sourceLayerHost;
@property (retain, nonatomic) CALayer *sourceContentLayer;
@property (nonatomic) unsigned int sourceContextId;
@property (nonatomic) struct CGSize { double width; double height; } lastKnownRenderSize;
@property (nonatomic) struct CGSize { double width; double height; } imageQueueSize;
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sourceLayer;
@property (nonatomic, getter=isPIPModeEnabled) BOOL PIPModeEnabled;

- (void)dealloc;
- (void)layout;
- (void).cxx_destruct;
- (void)_updateGeometry;
- (id)_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
- (void)_updateSourceLayerHost;
- (id)initWithSourceLayer:(id)a0 playerController:(id)a1;

@end
