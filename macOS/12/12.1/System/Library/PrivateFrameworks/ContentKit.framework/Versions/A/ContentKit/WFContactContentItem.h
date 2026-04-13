@class WFContact;

@interface WFContactContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFContact *contact;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (id)stringConversionBehavior;
+ (BOOL)hasLibrary;
+ (id)cachedContactGroups;

- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)changeTransaction;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)objectRepresentationsFromLabeledValues:(id)a0;
- (id)unnamedObjectRepresentationsFromLabeledValues:(id)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
