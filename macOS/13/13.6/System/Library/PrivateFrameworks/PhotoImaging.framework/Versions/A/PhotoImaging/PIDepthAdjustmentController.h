@class NSDictionary, NSNumber;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSNumber *glassesMatteAllowed;

+ (id)apertureKey;
+ (id)depthInfoKey;
+ (id)glassesMatteAllowedKey;

- (id)initWithAdjustment:(id)a0;
- (double)maximumAperture;
- (double)minimumAperture;
- (BOOL)canAdjustApertureValue;
- (BOOL)canRenderDepth;
- (id)capturedAperture;
- (id)pasteKeysForMediaType:(long long)a0;

@end
