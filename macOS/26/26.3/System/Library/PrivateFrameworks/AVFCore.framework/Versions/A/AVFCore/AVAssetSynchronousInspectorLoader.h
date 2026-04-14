@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}

- (id)lyrics;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)assetInspector;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (id)initWithAssetInspector:(id)a0;

@end
