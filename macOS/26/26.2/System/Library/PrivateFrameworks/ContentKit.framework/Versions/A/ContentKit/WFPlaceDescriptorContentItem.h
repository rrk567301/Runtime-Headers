@class LNEntity;

@interface WFPlaceDescriptorContentItem : WFLocationContentItem

@property (class, readonly, nonatomic) Class entityContentItemClass;

@property (readonly, nonatomic) LNEntity *entity;

@end
