@class WFContact;

@interface WFContactContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFContact *contact;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (BOOL)hasLibrary;
+ (id)cachedContactGroups;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)changeTransaction;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)objectRepresentationsFromLabeledValues:(id)a0;
- (id)unnamedObjectRepresentationsFromLabeledValues:(id)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
