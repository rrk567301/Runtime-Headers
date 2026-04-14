@class CALayer, NSString;

@interface FigVideoContainerLayer : FigBaseCALayer {
    CALayer *_videoLayer;
    CALayer *_STSLayer;
    struct OpaqueFigVideoReceiver { } *_videoReceiver;
    struct OpaqueFigVideoTarget { } *_videoTarget;
    struct OpaqueFigSimpleMutex { } *_videoTargetAndReceiverMutex;
    CALayer *_UUIDLayer;
    NSString *_preferredCADynamicRange;
    struct OpaqueFigSimpleMutex { } *_HDRPreferDynamicRangeMutex;
    struct OpaqueFigSimpleMutex { } *_configurationLock;
    BOOL _createdForVideoReceiver;
}

@property (readonly, nonatomic) struct OpaqueFigVideoTarget { } *videoTarget;
@property (retain, nonatomic) CALayer *videoLayer;
@property (nonatomic) BOOL shouldResizeVideoLayer;
@property (retain, nonatomic) NSString *STSLabel;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly, nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (nonatomic, getter=isForScrubbingOnly) BOOL forScrubbingOnly;
@property (readonly, nonatomic) BOOL requiresRebuild;

+ (id)defaultActionForKey:(id)a0;

- (id)actionForKey:(id)a0;
- (void)setPresentationSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSublayers;
- (id)initWithUUID:(id)a0;
- (void)_unsubscribeFromVideoReceiver:(struct OpaqueFigVideoReceiver { } *)a0;
- (id)preferredDynamicRange;
- (void)setIsReadyForDisplay:(BOOL)a0;
- (id)init;
- (id)initWithVideoReceiverAndUUID:(id)a0;
- (void)dealloc;
- (BOOL)_checkIfRebuildIsRequiredWhileHoldingVideoTargetMutex;
- (int)_createAndSetupVideoReceiverWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (void)setupVideoLayer:(id)a0;
- (void)setPreferredDynamicRange:(id)a0;
- (struct OpaqueFigVideoReceiver { } *)copyVideoReceiver;
- (void)rebuild;
- (void)_subscribeToVideoReceiver:(struct OpaqueFigVideoReceiver { } *)a0;
- (void)setToneMapToStandardDynamicRange:(BOOL)a0;

@end
