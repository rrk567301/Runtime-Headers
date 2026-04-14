@class NSString, NSNumber;

@interface WFStepperParameter : WFParameter

@property (readonly, copy, nonatomic) NSString *stepperPrefix;
@property (readonly, copy, nonatomic) NSString *stepperDescription;
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

@end
