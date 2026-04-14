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

- (void)_tearDown;
- (void)parsePOICategoriesJSON:(id)a0;
- (BOOL)isAlwaysVisiblePOIType:(int)a0;
- (id)initWithResourceManifestManager:(id)a0 resourceManager:(id)a1;
- (BOOL)parseCategoryMappingJSON:(id)a0 categoryToPOIType:(id *)a1 POITypeToCategory:(id *)a2;
- (id)init;
- (id)categoryToTypeMapping;
- (id)parseVisiblePOITypesJSON:(id)a0;
- (void).cxx_destruct;
- (void)loadPOICategoriesJSON;
- (void)clearCachedValues;
- (void)dealloc;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)categoryForPOIType:(int)a0;
- (id)alwaysVisibleTypes;
- (id)typeToCategoryMapping;
- (id)typesForPOICategories:(id)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;

@end
