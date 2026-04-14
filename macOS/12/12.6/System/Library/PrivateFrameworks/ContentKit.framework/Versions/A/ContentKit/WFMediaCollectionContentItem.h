@class MPMediaItemCollection;

@interface WFMediaCollectionContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) MPMediaItemCollection *collection;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

@end
