@class WFArticle;

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFArticle *article;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)fileWithHTML:(id)a0 named:(id)a1;
+ (id)attributedStringWithHTML:(id)a0 named:(id)a1;
+ (BOOL)supportedTypesMustBeDeterminedByInstance;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;

@end
