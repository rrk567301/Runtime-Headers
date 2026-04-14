@class NSString, GEOAltitudeManifestReserved;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver> {
    GEOAltitudeManifestReserved *_reserved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)initWithoutObserver;
- (id)availableRegions;
- (void)commonInit;
- (void)parseManifest:(id)a0;
- (BOOL)parseXml:(id)a0;
- (BOOL)isValidTourId:(unsigned long long)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (id)nameForRegion:(unsigned int)a0;
- (id)tourIdsForRegion:(unsigned int)a0;
- (void).cxx_destruct;
- (void)_reloadManifest;
- (id)tripIdsForRegion:(unsigned int)a0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)init;
- (unsigned int)versionForRegion:(unsigned int)a0;
- (unsigned int)dataVersionForRegion:(unsigned int)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (BOOL)hasDataVersionForRegion:(unsigned int)a0;
- (void)dealloc;

@end
