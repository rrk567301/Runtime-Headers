@class NSNumber;

@interface WFStepperParameter : WFParameter

@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;

- (id)initWithDefinition:(id)a0;
- (id)localizedLabel;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (Class)singleStateClass;
- (id)localizedLabelWithState:(id)a0 includingPrefix:(BOOL)a1;
- (id)localizedLabelWithoutCountAndPrefix;
- (id)localizedLabelFormatString;
- (id)stepperDescription;
- (id)stepperDescriptionWithContext:(id)a0;
- (id)stepperPrefix;
- (id)stepperPrefixWithContext:(id)a0;

@end
