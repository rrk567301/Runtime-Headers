@interface CLSPointOfInterestWideQueryPerformer : CLSBusinessItemGenericQueryPerformer

+ (id)categories;
+ (double)defaultPrecision;

- (id)initWithPOICache:(id)a0 locationCache:(id)a1;
- (char)shouldQueryItemsForRegion:(id)a0 selectedRegions:(id)a1;

@end
