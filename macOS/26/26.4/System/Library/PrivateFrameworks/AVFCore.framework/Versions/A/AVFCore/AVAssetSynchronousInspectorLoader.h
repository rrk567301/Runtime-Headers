@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}

- (id)lyrics;
- (BOOL)isComposable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isPlayable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isEqual:(id)a0;
- (BOOL)isExportable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)assetInspector;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isReadable;
- (id)initWithAssetInspector:(id)a0;

@end
