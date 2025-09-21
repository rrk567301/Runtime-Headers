@class NSMutableArray, NSString, NSURL, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface _MKIconDiskCache : NSObject <GEOResourceManifestTileGroupObserver> {
    NSURL *_directoryURL;
    NSObject<OS_dispatch_queue> *_storingQueue;
    NSLock *_lock;
    NSMutableArray *_inProgressUUIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;
- (void)_updateVersionsInfo;
- (id)imageForStyleAttributes:(id)a0 size:(unsigned long long)a1 scale:(double)a2 drawingBlock:(id /* block */)a3;
- (id)imageForStyleAttributes:(id)a0 size:(unsigned long long)a1 scale:(double)a2 isCarplay:(char)a3 isTransit:(char)a4 isTransparent:(char)a5 isNightMode:(char)a6 drawingBlock:(id /* block */)a7;
- (id)initWithDirectoryURL:(id)a0;

@end
