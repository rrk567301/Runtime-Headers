@interface RTBluePOITileStore : RTStore

- (void)fetchBluePOIMetadataWithHandler:(id /* block */)a0;
- (void)_fetchBluePOIMetadataWithHandler:(id /* block */)a0;
- (void)_fetchBluePOITileCountWithHandler:(id /* block */)a0;
- (void)_fetchBluePOITileWithGeoTileKey:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)_fetchBluePOITilesWithDateInterval:(id)a0 ascending:(BOOL)a1 limit:(id)a2 handler:(id /* block */)a3;
- (void)_fetchBluePOITilesWithDownloadKeys:(id)a0 handler:(id /* block */)a1;
- (void)_fetchBluePOITilesWithGeoTileKeys:(id)a0 handler:(id /* block */)a1;
- (void)_purgeBluePOIMetadataWithHandler:(id /* block */)a0;
- (void)_purgeBluePOITilesPredating:(id)a0 handler:(id /* block */)a1;
- (void)_removeBluePOITilesWithGeoTileKeys:(id)a0 handler:(id /* block */)a1;
- (void)fetchBluePOITileCountWithHandler:(id /* block */)a0;
- (void)fetchBluePOITileWithGeoTileKey:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)fetchBluePOITilesWithDateInterval:(id)a0 ascending:(BOOL)a1 limit:(id)a2 handler:(id /* block */)a3;
- (void)fetchBluePOITilesWithDownloadKeys:(id)a0 handler:(id /* block */)a1;
- (void)fetchBluePOITilesWithGeoTileKeys:(id)a0 handler:(id /* block */)a1;
- (void)purgeBluePOIMetadataWithHandler:(id /* block */)a0;
- (void)purgeBluePOITilesPredating:(id)a0 handler:(id /* block */)a1;
- (void)removeBluePOITilesWithGeoTileKeys:(id)a0 handler:(id /* block */)a1;
- (void)storeBluePOIMetadata:(id)a0 handler:(id /* block */)a1;
- (void)storeBluePOITiles:(id)a0 handler:(id /* block */)a1;
- (void)updateBluePOIMetadata:(id)a0 handler:(id /* block */)a1;
- (void)updateBluePOITiles:(id)a0 handler:(id /* block */)a1;

@end
