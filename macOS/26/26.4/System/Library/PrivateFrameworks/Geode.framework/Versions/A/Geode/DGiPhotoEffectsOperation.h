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

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)_filter;
- (id)init;
- (BOOL)isPostGeometryOperation;

@end
