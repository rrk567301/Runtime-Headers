@class LNEntity;

@interface WFPostalAddressContentItem : WFLocationContentItem

@property (class, readonly, nonatomic) Class entityContentItemClass;

@property (readonly, nonatomic) LNEntity *postalAddressEntity;

- (void).cxx_destruct;
- (id)postalAddressValue;

@end
