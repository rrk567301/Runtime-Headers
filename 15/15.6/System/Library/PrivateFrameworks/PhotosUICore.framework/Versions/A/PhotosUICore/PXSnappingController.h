@interface PXSnappingController : NSObject

@property (nonatomic, setter=_setHasEnteredAttractionThreshold:) char _hasEnteredAttractionThreshold;
@property (nonatomic, setter=_setHasEnteredRetentionThreshold:) char _hasEnteredRetentionThreshold;
@property (nonatomic, setter=_setPreviousOffset:) double _previousOffset;
@property (nonatomic, getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:) char _previousOffsetInvalid;
@property (nonatomic, setter=_setAccumulatedOffset:) double _accumulatedOffset;
@property (readonly, nonatomic) double snappingTarget;
@property (nonatomic) double retentionOffsetThreshold;
@property (nonatomic) double attractionOffsetThreshold;
@property (nonatomic) double attractionVelocityThreshold;
@property (nonatomic) char accumulateOffsetWhileSnapped;
@property (readonly, nonatomic, getter=isSnappedToTarget) char snappedToTarget;

- (id)init;
- (void)_reset;
- (char)_isOffset:(double)a0 inThreshold:(double)a1;
- (void)_setBoolPointer:(inout char *)a0 toValue:(char)a1;
- (void)didSnapByAttraction;
- (id)initWithSnappingTarget:(double)a0;
- (void)interactionBegan;
- (void)interactionEnded;
- (void)updateOffset:(inout double *)a0 withVelocity:(double)a1 shouldSnap:(out char *)a2 shouldBreak:(out char *)a3;

@end
