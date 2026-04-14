@class NSString, UIViewController, AVPlayerLayer;
@protocol MPCVideoOutputDelegate;

@interface _MPCVideoLayerOutput : NSObject <MPCPlaybackEngineEventObserving, MPCVideoOutput>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPCVideoOutputDelegate> videoOutputDelegate;
@property (readonly, nonatomic) UIViewController *playerViewController;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) BOOL showsPlaybackControls;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (nonatomic) BOOL allowsVideoFrameAnalysis;

+ (id)keyPathsForValuesAffectingPresentationSize;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoGravity;
+ (id)keyPathsForValuesAffectingIsReadyForDisplay;

- (void)engineDidReceiveMediaServicesPurge:(id)a0;
- (void)engineDidResetMediaServices:(id)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (void)engine:(id)a0 willChangeToItem:(id)a1 fromItem:(id)a2;
- (void).cxx_destruct;
- (void)_updatePlayerLayerWithEngine:(id)a0;

@end
