@class WFMessage;

@interface WFMessageContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFMessage *message;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
