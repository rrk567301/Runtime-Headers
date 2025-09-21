@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (char)isReadable;
- (id)assetInspector;
- (id)initWithAssetInspector:(id)a0;
- (char)isCompatibleWithSavedPhotosAlbum;
- (char)isComposable;
- (char)isExportable;
- (char)isPlayable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (id)lyrics;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;

@end
