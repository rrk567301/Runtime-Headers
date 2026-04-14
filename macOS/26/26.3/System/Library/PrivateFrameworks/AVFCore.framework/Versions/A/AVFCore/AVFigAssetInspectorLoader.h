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

+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetTrackPropertiesForKeys;

- (id)lyrics;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)hasProtectedContent;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_prefersNominalDurations;
- (unsigned long long)downloadToken;
- (BOOL)isPlayable;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (id)asset;
- (BOOL)isComposable;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (long long)firstFragmentSequenceNumber;
- (id)originalNetworkContentURL;
- (void)_setFragmentMindingInterval:(double)a0;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4 figErr:(int *)a5;
- (id)_loadingBatches;
- (id)URL;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)contentKeySpecifiersEligibleForPreloading;
- (double)_fragmentMindingInterval;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelLoading;
- (Class)_classForTrackInspectors;
- (id)variants;
- (id)figChapters;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (BOOL)_isStreaming;
- (BOOL)isAssociatedWithFragmentMinder;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)_completionHandlerQueue;
- (long long)fragmentCount;
- (id)figChapterGroupInfo;
- (id)resolvedURL;
- (void)_addFigAssetNotifications;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)assetInspector;
- (void)_removeFigAssetNotifications;
- (BOOL)isExportable;
- (BOOL)isReadable;

@end
