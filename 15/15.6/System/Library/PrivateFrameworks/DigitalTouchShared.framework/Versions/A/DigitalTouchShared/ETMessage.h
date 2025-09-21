@class NSString, NSMutableSet, NSColor;
@protocol ETMessageTimeSource, ETMessageDelegate;

@interface ETMessage : NSObject {
    NSMutableSet *_childrenDelayingWisp;
}

@property (readonly, nonatomic) unsigned short messageType;
@property (readonly, nonatomic) unsigned long long messageVersion;
@property (nonatomic) double timeCreated;
@property (nonatomic) double sendTime;
@property (nonatomic) double startDelay;
@property (nonatomic) char supportsPlaybackTimeOffset;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char missedDuringPlayback;
@property (readonly, nonatomic) char shouldLoopDuringPlayback;
@property (retain, nonatomic) NSColor *color;
@property (nonatomic, getter=isRenderingOffscreen) char renderingOffscreen;
@property (nonatomic, getter=isRenderingOffscreenOpaque) char renderingOffscreenOpaque;
@property (readonly, nonatomic) double messageDuration;
@property (weak, nonatomic) id<ETMessageDelegate> delegate;
@property (weak, nonatomic) id<ETMessageTimeSource> timeSource;
@property (nonatomic) char delayWisp;
@property (weak, nonatomic) ETMessage *parentMessage;
@property (readonly, nonatomic, getter=isAnimated) char animated;
@property (nonatomic) char mute;

+ (unsigned short)messageType;
+ (id)unarchive:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)archiveData;
- (id)initWithArchiveData:(id)a0;
- (id)archive;
- (void)stopPlaying;
- (char)sendTimeIsValid;
- (void)displayInScene:(id)a0;
- (void)_startAudioPlayback;
- (void)_stopAudioPlayback;
- (void)childMessageDidCompleteWisp:(id)a0;
- (void)childMessageDidDelayWisp:(id)a0;
- (char)hasWispingChildren;
- (id)messageTypeAsString;
- (void)preVisualizeInScene:(id)a0;
- (char)reachedSizeLimit;
- (struct CGPoint { double x0; double x1; })scenePointFromNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 inScene:(id)a1;
- (void)wispChildren;

@end
