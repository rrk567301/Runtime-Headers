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

+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackPropertiesForKeys;

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
- (struct OpaqueFigAsset { } *)_figAsset;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (double)_fragmentMindingInterval;
- (void)_setFragmentMindingInterval:(double)a0;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (id)lyrics;
- (BOOL)hasProtectedContent;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4;
- (id)assetInspector;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)originalNetworkContentURL;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (id)_completionHandlerQueue;
- (id)_loadingBatches;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;

@end
