@class NUImageGeometry, NSString, NSMutableArray, NSObject;
@protocol OS_os_log, NUPurgeableTextureImage, NUTextureImage, OS_dispatch_queue;

@interface NUTiledImageLayer : CALayer <CALayerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_os_log> *_log;
}

@property (retain) id<NUPurgeableTextureImage> _image;
@property (retain) NUImageGeometry *_geometry;
@property (retain) NSMutableArray *_tileLayers;
@property (retain) id<NUTextureImage> image;
@property (retain) NUImageGeometry *geometry;
@property (readonly, nonatomic) BOOL nu_contentsAreFlipped;
@property (retain) struct CGColor { } *debugColor;
@property (nonatomic) struct { long long x; long long y; } validRegionInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultActionForKey:(id)a0;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)layoutSublayers;
- (id)init;
- (void)removeFromSuperlayer;
- (void)_updateSublayers;
- (void).cxx_destruct;
- (id)snapshotImage;
- (void)_recycleTiles;

@end
