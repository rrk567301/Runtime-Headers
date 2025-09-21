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
    BOOL _prefersNominalDurations;
    long long _fragmentMinderAssociationCount;
    NSURL *_URL;
}

+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetTrackPropertiesForKeys;

- (Class)_classForTrackInspectors;
- (id)lyrics;
- (BOOL)isComposable;
- (void)cancelLoading;
- (id)_loadingBatches;
- (id)_completionHandlerQueue;
- (void)_removeFigAssetNotifications;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasProtectedContent;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (struct OpaqueFigAsset { } *)_figAsset;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (id)figChapters;
- (id)URL;
- (BOOL)isAssociatedWithFragmentMinder;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)originalNetworkContentURL;
- (id)figChapterGroupInfo;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (id)assetInspector;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)_prefersNominalDurations;
- (void)_addFigAssetNotifications;
- (id)asset;
- (BOOL)isReadable;
- (void)_setFragmentMindingInterval:(double)a0;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (id)variants;
- (BOOL)_isStreaming;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4 figErr:(int *)a5;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)resolvedURL;
- (double)_fragmentMindingInterval;
- (unsigned long long)downloadToken;
- (id)contentKeySpecifiersEligibleForPreloading;

@end
