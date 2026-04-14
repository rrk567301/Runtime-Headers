@class AVDispatchOnce, NSDictionary, AVAssetInspectorLoader, NSArray;

@interface AVDataAsset : AVAsset {
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    AVDispatchOnce *_allocateTracksOnceOnly;
    NSArray *_tracks;
}

+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)a0 figAssetCreationFlags:(unsigned long long *)a1;
+ (unsigned long long)_dataLengthLimit;

- (void)dealloc;
- (id)tracks;
- (id)initWithData:(id)a0 contentType:(id)a1;
- (id)_assetInspectorLoader;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (id)_assetInspector;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (Class)_classForTrackInspectors;
- (unsigned long long)referenceRestrictions;
- (BOOL)_requiresInProcessOperation;

@end
