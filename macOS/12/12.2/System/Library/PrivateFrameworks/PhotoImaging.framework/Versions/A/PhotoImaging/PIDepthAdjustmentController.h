@class NSDictionary, NSNumber;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSNumber *glassesMatteAllowed;

+ (id)glassesMatteAllowedKey;
+ (id)depthInfoKey;
+ (id)apertureKey;

- (id)initWithAdjustment:(id)a0;
- (BOOL)canRenderDepth;
- (id)capturedAperture;

@end
