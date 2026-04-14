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
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetPropertiesForKeys;

- (id)lyrics;
- (id)variants;
- (Class)_classForTrackInspectors;
- (BOOL)isComposable;
- (id)contentKeySpecifiersEligibleForPreloading;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addFigAssetNotifications;
- (unsigned long long)downloadToken;
- (BOOL)hasProtectedContent;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isPlayable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (struct OpaqueFigAsset { } *)_figAsset;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (void)_setFragmentMindingInterval:(double)a0;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (BOOL)_isStreaming;
- (id)URL;
- (void)cancelLoading;
- (id)figChapters;
- (id)resolvedURL;
- (long long)firstFragmentSequenceNumber;
- (double)_fragmentMindingInterval;
- (BOOL)isExportable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isAssociatedWithFragmentMinder;
- (void)_removeFigAssetNotifications;
- (id)assetInspector;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (id)_loadingBatches;
- (id)asset;
- (long long)fragmentCount;
- (id)originalNetworkContentURL;
- (id)_completionHandlerQueue;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (BOOL)_prefersNominalDurations;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4 figErr:(int *)a5;
- (void)dealloc;
- (BOOL)isReadable;
- (id)figChapterGroupInfo;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;

@end
