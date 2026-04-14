@class AVDispatchOnce, AVWeakReference, NSURL, AVAssetInspector, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
    struct OpaqueFigAsset { } *_figAsset;
    int _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    AVDispatchOnce *_assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    BOOL _registeredForFigAssetNotifications;
    long long _fragmentMinderAssociationCount;
    NSURL *_URL;
}

+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackPropertiesForKeys;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;

- (void)dealloc;
- (id)URL;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)resolvedURL;
- (unsigned long long)downloadToken;
- (id)asset;
- (id)variants;
- (BOOL)_isStreaming;
- (BOOL)isReadable;
- (BOOL)isAssociatedWithFragmentMinder;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelLoading;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (Class)_classForTrackInspectors;
- (double)_fragmentMindingInterval;
- (void)_setFragmentMindingInterval:(double)a0;
- (id)lyrics;
- (BOOL)hasProtectedContent;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)originalNetworkContentURL;
- (id)assetInspector;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (id)_completionHandlerQueue;
- (id)_loadingBatches;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;

@end
