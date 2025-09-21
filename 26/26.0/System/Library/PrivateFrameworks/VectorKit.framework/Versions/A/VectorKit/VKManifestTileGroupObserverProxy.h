@class NSString;

@interface VKManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>

@property struct function<void (GEOResourceManifestManager *)> { struct __value_func<void (GEOResourceManifestManager *)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } willChangeActiveTileGroup;
@property struct function<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> { struct __value_func<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } didChangeActiveTileGroup;
@property struct function<void (GEOExperimentConfiguration *)> { struct __value_func<void (GEOExperimentConfiguration *)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } experimentConfigurationDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)experimentConfigurationDidChange:(id)a0;
- (void)dealloc;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (id).cxx_construct;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;
- (void).cxx_destruct;

@end
