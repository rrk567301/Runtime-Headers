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
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)hasProtectedContent;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (long long)firstFragmentSequenceNumber;
- (id)initWithURL:(id)a0;
- (id)URL;
- (void)cancelLoading;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (BOOL)_isStreaming;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)fragmentCount;
- (id)figChapterGroupInfo;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)assetInspector;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (long long)_status;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
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
