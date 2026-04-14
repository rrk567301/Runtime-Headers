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

- (void)cancelLoading;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (id)lyrics;
- (BOOL)hasProtectedContent;
- (BOOL)_isStreaming;
- (id)assetInspector;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0;
- (id)URL;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)figChapterGroupInfo;
- (void)dealloc;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (BOOL)isExportable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (long long)fragmentCount;
- (long long)_status;
- (long long)firstFragmentSequenceNumber;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
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
