@interface SMCT.ComfortBitUtility : NSObject

+ (BOOL)computeMotionComfortBitWithMotionAccessorArray:(id)a0 threshold:(float)a1 windowSize:(float)a2 frameRate:(float)a3;
+ (BOOL)computeMotionComfortBitWithMotionScoreArray:(id)a0 motionAccessorArray:(id)a1 thresholdMotionScore:(float)a2 thresholdMotionAccessor:(float)a3 windowSize:(float)a4 frameRate:(float)a5;
+ (BOOL)computeMotionComfortBitWithMotionScoreArray:(id)a0 threshold:(float)a1 windowSize:(float)a2 frameRate:(float)a3;

- (id)init;

@end
