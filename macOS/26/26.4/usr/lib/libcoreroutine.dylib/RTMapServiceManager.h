@class NSXPCConnection;

@interface RTMapServiceManager : RTService <RTHelperServiceProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchCountryAndSubdivisionCodesFromLocation:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchMapItemsFromAddressDictionary:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchMapItemsFromIdentifiers:(id)a0 options:(id)a1 source:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)compileCoreMLModelAtURL:(id)a0 handler:(id /* block */)a1;
- (void)_setup;
- (void)interruptComputeWithError:(id /* block */)a0;
- (void)computeWithInputSignals:(id)a0 handler:(id /* block */)a1;
- (void)downloadBluePOIMetadataWithHandler:(id /* block */)a0;
- (void)fetchPointOfInterestAttributesWithIdentifier:(unsigned long long)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchMapItemFromHandle:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchMapItemsRelatedPlacesFromLocation:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (id)mapItemWithIdentifier:(id)a0 geoMapItem:(id)a1 source:(unsigned long long)a2 creationDate:(id)a3 error:(id *)a4;
- (void)fetchMapItemsFromAddressString:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_proxyForServicingSelector:(SEL)a0 withErrorHandler:(id /* block */)a1;
- (void)fetchMapItemWithIdentifier:(id)a0 geoMapItem:(id)a1 source:(unsigned long long)a2 creationDate:(id)a3 handler:(id /* block */)a4;
- (void)fetchBluePOITilesForDownloadKeys:(id)a0 handler:(id /* block */)a1;
- (id)mapItemWithIdentifier:(id)a0 geoMapItemStorage:(id)a1 source:(unsigned long long)a2 creationDate:(id)a3 error:(id *)a4;
- (void)fetchMapItemsFromLocation:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (id)init;
- (void)downloadBluePOITilesForDownloadKeys:(id)a0 handler:(id /* block */)a1;
- (void)fetchMapItemsFromNaturalLanguageQuery:(id)a0 location:(id)a1 options:(id)a2 handler:(id /* block */)a3;
- (void)fetchAppClipURLsForMapItem:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchPointOfInterestsAroundCoordinate:(id)a0 radius:(double)a1 options:(id)a2 handler:(id /* block */)a3;
- (void)fetchBuildingPolygonsFromLocation:(id)a0 radius:(double)a1 handler:(id /* block */)a2;
- (void)fetchBluePOIMetadataWithHandler:(id /* block */)a0;
- (void)createMapItemWithIdentifier:(id)a0 geoMapItemStorage:(id)a1 source:(unsigned long long)a2 creationDate:(id)a3 handler:(id /* block */)a4;
- (void)fetchGeoMapItemWithMUID:(unsigned long long)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)inferLocalBluePOIWithReferenceLocation:(id)a0 locations:(id)a1 accessPoints:(id)a2 bluePOITile:(id)a3 signalEnv:(int)a4 refreshAOI:(BOOL)a5 handler:(id /* block */)a6;
- (void)fetchPostalAddressForMapItem:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)loadProtobufTileAtPath:(id)a0 handler:(id /* block */)a1;
- (void)fetchMapItemsFromLocations:(id)a0 accessPoints:(id)a1 startDate:(id)a2 endDate:(id)a3 options:(id)a4 handler:(id /* block */)a5;

@end
