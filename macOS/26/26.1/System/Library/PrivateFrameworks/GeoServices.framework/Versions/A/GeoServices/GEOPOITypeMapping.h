@class GEOResourceManifestManager, NSString, NSSet, NSDictionary, GEOResourceManager, geo_isolater;

@interface GEOPOITypeMapping : NSObject <GEOResourceManifestTileGroupObserver> {
    NSSet *_alwaysVisibleTypes;
    NSDictionary *_categoryToTypeMapping;
    NSDictionary *_typeToCategoryMapping;
    geo_isolater *_accessLock;
    GEOResourceManifestManager *_manifestManager;
    GEOResourceManager *_resourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMapping;

- (void)loadPOICategoriesJSON;
- (id)categoryForPOIType:(int)a0;
- (BOOL)parseCategoryMappingJSON:(id)a0 categoryToPOIType:(id *)a1 POITypeToCategory:(id *)a2;
- (void)parsePOICategoriesJSON:(id)a0;
- (BOOL)isAlwaysVisiblePOIType:(int)a0;
- (void)_tearDown;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (id)alwaysVisibleTypes;
- (void)clearCachedValues;
- (id)categoryToTypeMapping;
- (void)dealloc;
- (id)parseVisiblePOITypesJSON:(id)a0;
- (id)typesForPOICategories:(id)a0;
- (void).cxx_destruct;
- (id)typeToCategoryMapping;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)initWithResourceManifestManager:(id)a0 resourceManager:(id)a1;
- (id)init;

@end
