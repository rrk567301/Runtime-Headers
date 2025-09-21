@class NSString, NSArray;
@protocol GEOMapItem;

@interface GeoServices.GEOCategoryTaxonomyMapper : NSObject <GEOResourceManifestTileGroupObserver> {
    void /* unknown type, empty encoding */ taxonomyMapping;
}

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)categoryStringsFor:(long long)a0 placeCategory:(NSString *)a1 countryCode:(NSString *)a2 completionHandler:(void (^)(NSArray *))a3;
- (void)categoryStringsFor:(long long)a0 mapItem:(id<GEOMapItem>)a1 completionHandler:(void (^)(NSArray *))a2;

@end
