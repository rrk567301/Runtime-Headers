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

+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetTrackPropertiesForKeys;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetPropertiesForKeys;

- (unsigned long long)downloadToken;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isComposable;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)lyrics;
- (BOOL)hasProtectedContent;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_isStreaming;
- (BOOL)_prefersNominalDurations;
- (void)_addFigAssetNotifications;
- (long long)firstFragmentSequenceNumber;
- (id)originalNetworkContentURL;
- (id)URL;
- (id)figChapters;
- (BOOL)isReadable;
- (void)_setFragmentMindingInterval:(double)a0;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (long long)fragmentCount;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (void)cancelLoading;
- (double)_fragmentMindingInterval;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (BOOL)isExportable;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (BOOL)isPlayable;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4 figErr:(int *)a5;
- (id)figChapterGroupInfo;
- (Class)_classForTrackInspectors;
- (id)assetInspector;
- (id)_loadingBatches;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)isAssociatedWithFragmentMinder;
- (id)variants;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (id)asset;
- (id)_completionHandlerQueue;
- (void)_removeFigAssetNotifications;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)resolvedURL;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (void)dealloc;

@end
