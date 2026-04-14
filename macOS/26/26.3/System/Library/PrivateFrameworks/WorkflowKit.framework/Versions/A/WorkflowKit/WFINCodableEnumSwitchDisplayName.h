@class INCodableEnumAttribute, NSString;

@interface WFINCodableEnumSwitchDisplayName : NSObject <WFParameterLocalizedValue>

@property (readonly, nonatomic) long long toggleState;
@property (readonly, nonatomic) INCodableEnumAttribute *attribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 toggleState:(long long)a1;
- (id)localizedStringWithContext:(id)a0 pluralizationNumber:(id)a1;

@end
