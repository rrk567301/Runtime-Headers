@class NSArray;

@interface PIRetouchAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *detectedFaces;
@property (readonly, nonatomic) unsigned long long retouchStrokeCount;

+ (id)modeKey;
+ (id)inputStrokesKey;
+ (id)sourceOffsetKey;
+ (id)clipRectKey;
+ (id)detectedFacesKey;
+ (id)enabledKey;
+ (id)repairEdgesKey;
+ (id)sourceOffsetXKey;
+ (id)sourceOffsetYKey;

- (void)appendStroke:(id)a0;

@end
