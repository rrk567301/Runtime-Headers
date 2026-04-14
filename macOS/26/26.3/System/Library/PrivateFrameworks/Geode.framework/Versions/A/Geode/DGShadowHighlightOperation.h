@class NSNumber;

@interface DGShadowHighlightOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputHighlightAmount;
@property (copy, nonatomic) NSNumber *inputShadowAmount;
@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputColorCorrection;
@property (copy, nonatomic) NSNumber *inputHighlightTonalWidth;
@property (copy, nonatomic) NSNumber *inputMidtoneContrast;
@property (copy, nonatomic) NSNumber *inputShadowTonalWidth;
@property int inputShadowHighlightLegacyVersion;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_filterForPipelineVersion:(unsigned long long)a0;
- (void)setOperationDefaults;

@end
