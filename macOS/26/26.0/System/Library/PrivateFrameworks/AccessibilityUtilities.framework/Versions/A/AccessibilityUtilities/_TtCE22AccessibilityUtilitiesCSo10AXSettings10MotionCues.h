@interface _TtCE22AccessibilityUtilitiesCSo10AXSettings10MotionCues : NSObject {
    void /* unknown type, empty encoding */ _$dotSize_Storage;
    void /* unknown type, empty encoding */ _$dotDensity_Storage;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic) float motionCuesDotSize;
@property (nonatomic, readonly) BOOL motionCuesIncreasedSizeEnabled;
@property (nonatomic) float motionCuesDotDensity;
@property (nonatomic, readonly) BOOL motionCuesIncreasedDensityEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)setMotionCuesIncreasedDensityEnabled:(BOOL)a0;
- (void)setMotionCuesIncreasedSizeEnabled:(BOOL)a0;

@end
