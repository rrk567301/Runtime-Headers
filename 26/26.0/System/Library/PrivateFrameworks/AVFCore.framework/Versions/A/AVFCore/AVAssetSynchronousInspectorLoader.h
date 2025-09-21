@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}

- (id)lyrics;
- (BOOL)isComposable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (void)dealloc;
- (id)assetInspector;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isReadable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetInspector:(id)a0;

@end
