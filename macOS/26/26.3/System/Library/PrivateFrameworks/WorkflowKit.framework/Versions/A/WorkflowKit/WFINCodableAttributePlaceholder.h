@class NSString, INCodableAttributeMetadata;

@interface WFINCodableAttributePlaceholder : NSObject <WFParameterLocalizedValue>

@property (readonly, nonatomic) INCodableAttributeMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (id)localizedStringWithContext:(id)a0 pluralizationNumber:(id)a1;

@end
