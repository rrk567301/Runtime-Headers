@class NSString, INCodableEnumValue;

@interface WFINCodableEnumValueLabelName : NSObject <WFParameterLocalizedValue>

@property (readonly, nonatomic) INCodableEnumValue *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)localizedStringWithContext:(id)a0 pluralizationNumber:(id)a1;

@end
