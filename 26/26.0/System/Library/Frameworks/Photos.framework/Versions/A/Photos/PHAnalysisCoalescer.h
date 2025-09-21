@class PHPhotoLibrary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PHAnalysisCoalescer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_lock_assetUUIDsByFeature;
    id /* block */ _lock_pendingBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PHPhotoLibrary *_photoLibrary;
}

+ (void)_analyzeBufferedAssets:(id)a0 inLibrary:(id)a1;
+ (void)_logFailureIfNeededForResult:(id)a0 andFeature:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)_snapshotOfBufferedAssets;
- (void)coalesceAndAnalyzeAssets:(id)a0 forFeature:(unsigned long long)a1;
- (id)initWithLibrary:(id)a0;

@end
