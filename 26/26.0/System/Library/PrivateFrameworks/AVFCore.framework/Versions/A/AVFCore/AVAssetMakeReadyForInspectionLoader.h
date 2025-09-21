@class NSURL, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    long long _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}

- (id)lyrics;
- (BOOL)isComposable;
- (void)cancelLoading;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasProtectedContent;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (id)URL;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (void)dealloc;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (id)figChapterGroupInfo;
- (id)assetInspector;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (BOOL)_inspectionRequiresAFormatReader;
- (BOOL)isReadable;
- (id)initWithURL:(id)a0;
- (BOOL)_isStreaming;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)_status;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;
- (BOOL)_providesAccurateTiming;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;

@end
