@class NSString, INCodableBooleanAttributeMetadata;

@interface WFINCodableBooleanAttributeDisplayName : NSObject <WFParameterLocalizedValue>

@property (readonly, nonatomic) INCodableBooleanAttributeMetadata *attribute;
@property (readonly, nonatomic) BOOL isOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 isOn:(BOOL)a1;
- (id)localizedStringWithContext:(id)a0 pluralizationNumber:(id)a1;

@end
