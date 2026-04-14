@class NSDictionary, NSNumber;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSNumber *glassesMatteAllowed;

+ (id)depthInfoKey;
+ (id)apertureKey;
+ (id)glassesMatteAllowedKey;

- (id)initWithAdjustment:(id)a0;
- (id)pasteKeysForMediaType:(long long)a0;
- (double)minimumAperture;
- (double)maximumAperture;
- (BOOL)canRenderDepth;
- (BOOL)canAdjustApertureValue;
- (id)capturedAperture;

@end
