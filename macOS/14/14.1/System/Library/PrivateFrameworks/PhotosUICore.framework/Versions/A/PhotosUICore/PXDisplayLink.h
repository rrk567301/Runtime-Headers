@class NSString;

@interface PXDisplayLink : NSObject <PXDisplayLinkProtocol> {
    struct __CVDisplayLink { } *_displayLinkRef;
}

@property (class, readonly, nonatomic) BOOL highFramerateRequiresReasonAndRange;

@property (nonatomic) BOOL invalidated;
@property (nonatomic) double timestamp;
@property (nonatomic) double duration;
@property (nonatomic) double targetTimestamp;
@property (nonatomic) BOOL isHighFrameRateActive;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSString *runloopModes;
@property (readonly, nonatomic) double currentMediaTime;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) unsigned long long frameRateRangeType;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) long long preferredFramesPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_tick:(struct __CVDisplayLink { } *)a0;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1;
- (void)_ensureDisplayLink;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 preferredFramesPerSecond:(long long)a2;

@end
