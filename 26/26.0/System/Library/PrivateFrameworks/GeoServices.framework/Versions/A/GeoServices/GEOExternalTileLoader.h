@class NSString, GEOTileLoader;

@interface GEOExternalTileLoader : NSObject {
    NSString *_clientId;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _tileLoaderOpen;
    GEOTileLoader *_tileLoader;
}

- (void)dealloc;
- (id)tileLoader;
- (id)init;
- (void).cxx_destruct;
- (void)validateCaches:(id)a0 result:(id /* block */)a1 finished:(id /* block */)a2;
- (void)fetchTile:(id)a0 result:(id /* block */)a1;
- (void)fetchTiles:(id)a0 result:(id /* block */)a1 finished:(id /* block */)a2;

@end
