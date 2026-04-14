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

- (void)clearCachedValues;
- (void)_tearDown;
- (id)parseVisiblePOITypesJSON:(id)a0;
- (id)typeToCategoryMapping;
- (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (BOOL)parseCategoryMappingJSON:(id)a0 categoryToPOIType:(id *)a1 POITypeToCategory:(id *)a2;
- (id)categoryToTypeMapping;
- (BOOL)isAlwaysVisiblePOIType:(int)a0;
- (id)categoryForPOIType:(int)a0;
- (id)init;
- (id)initWithResourceManifestManager:(id)a0 resourceManager:(id)a1;
- (id)typesForPOICategories:(id)a0;
- (void)parsePOICategoriesJSON:(id)a0;
- (void)loadPOICategoriesJSON;
- (id)alwaysVisibleTypes;
- (void)dealloc;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;

@end
