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

+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetPropertiesForKeys;

- (void)cancelLoading;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (id)lyrics;
- (BOOL)hasProtectedContent;
- (id)_completionHandlerQueue;
- (BOOL)_isStreaming;
- (id)asset;
- (id)assetInspector;
- (void)_setFragmentMindingInterval:(double)a0;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (struct OpaqueFigAsset { } *)_figAsset;
- (double)_fragmentMindingInterval;
- (id)figChapters;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4 figErr:(int *)a5;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (void)_removeFigAssetNotifications;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (id)contentKeySpecifiersEligibleForPreloading;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (unsigned long long)downloadToken;
- (id)URL;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (id)originalNetworkContentURL;
- (id)figChapterGroupInfo;
- (void)dealloc;
- (id)variants;
- (Class)_classForTrackInspectors;
- (BOOL)_prefersNominalDurations;
- (id)resolvedURL;
- (BOOL)isExportable;
- (void)_addFigAssetNotifications;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)fragmentCount;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (id)_loadingBatches;
- (BOOL)isAssociatedWithFragmentMinder;
- (long long)firstFragmentSequenceNumber;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;

@end
