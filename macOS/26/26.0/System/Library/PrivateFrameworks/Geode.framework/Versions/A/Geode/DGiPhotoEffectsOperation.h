@class NSNumber;

@interface DGiPhotoEffectsOperation : DGOperation

@property (nonatomic) NSNumber *inputEffectType;
@property (copy, nonatomic) NSNumber *inputBlackAndWhiteIntensity;
@property (copy, nonatomic) NSNumber *inputSepiaIntensity;
@property (copy, nonatomic) NSNumber *inputAntiqueIntensity;
@property (copy, nonatomic) NSNumber *inputMatteIntensity;
@property (copy, nonatomic) NSNumber *inputVignetteIntensity;
@property (copy, nonatomic) NSNumber *inputEdgeBlurIntensity;
@property (copy, nonatomic) NSNumber *inputFadeIntensity;
@property (copy, nonatomic) NSNumber *inputBoostIntensity;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)_filter;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPostGeometryOperation;

@end
