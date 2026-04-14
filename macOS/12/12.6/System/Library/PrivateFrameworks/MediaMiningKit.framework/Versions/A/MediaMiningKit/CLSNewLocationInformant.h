@interface CLSNewLocationInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (BOOL)location:(struct CLLocationCoordinate2D { double x0; double x1; })a0 isCloseToLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (BOOL)location:(struct CLLocationCoordinate2D { double x0; double x1; })a0 isFarFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)businessItemsForRegion:(id)a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })shiftedCoordinatesFromOriginalCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)searchBusinessItemsAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 forCategories:(id)a1 precision:(double)a2 inCache:(id)a3;
+ (id)filterBusinessItems:(id)a0 forCategories:(id)a1 subCategories:(id)a2 blocklistCategories:(id)a3;
+ (BOOL)doesRegion:(id)a0 intersectOtherRegion:(id)a1;
+ (id)createPlaceForBusinessItem:(id)a0;
+ (id)areaOfInterestCategories;
+ (id)shiftedLocationFromOriginalLocation:(id)a0;
+ (BOOL)doesRegion:(id)a0 containLocation:(id)a1;
+ (id)pointOfInterestCategories;
+ (id)natureCategories;
+ (id)_categoriesDescriptionFromCategories:(id)a0;
+ (id)regionOfInterestCategories;

- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;
- (id)_pointOfInterestTraits;
- (id)outputLocationCluesForOuputClueKey:(id)a0 inputClue:(id)a1 region:(id)a2 traits:(id)a3 categories:(id)a4 exactMatch:(BOOL)a5 precision:(double)a6 cache:(id)a7;
- (id)_regionOfInterestTraits;
- (id)_regionOfInterestCategories;
- (id)locationAreaOfInterestCluesForInputClue:(id)a0;
- (id)locationRegionOfInterestCluesForInputClue:(id)a0;
- (id)locationPointOfInterestCluesForInputClue:(id)a0;

@end
