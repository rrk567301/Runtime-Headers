@class CLLocation, MKMapItem;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) CLLocation *queryLocation;
@property (readonly, nonatomic) MKMapItem *mapItem;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithMapItem:(id)a0 fromQueryLocation:(id)a1 origin:(id)a2 disclosureLevel:(unsigned long long)a3;

- (void).cxx_destruct;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;

@end
