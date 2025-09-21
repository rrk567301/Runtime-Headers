@class NSString, GEOAltitudeManifestReserved;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver> {
    GEOAltitudeManifestReserved *_reserved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)nameForRegion:(unsigned int)a0;
- (id)tripIdsForRegion:(unsigned int)a0;
- (id)initWithoutObserver;
- (void)commonInit;
- (unsigned int)versionForRegion:(unsigned int)a0;
- (void)dealloc;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (unsigned int)dataVersionForRegion:(unsigned int)a0;
- (id)init;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (BOOL)hasDataVersionForRegion:(unsigned int)a0;
- (id)availableRegions;
- (id)tourIdsForRegion:(unsigned int)a0;
- (void)_reloadManifest;
- (BOOL)isValidTourId:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)parseXml:(id)a0;
- (void)parseManifest:(id)a0;

@end
