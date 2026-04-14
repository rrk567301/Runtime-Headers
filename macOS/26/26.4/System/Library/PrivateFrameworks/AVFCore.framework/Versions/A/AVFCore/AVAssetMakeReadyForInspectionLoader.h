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
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasProtectedContent;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isPlayable;
- (id)initWithURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isStreaming;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (id)URL;
- (void)cancelLoading;
- (long long)firstFragmentSequenceNumber;
- (BOOL)isExportable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)assetInspector;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (long long)_status;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (long long)fragmentCount;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (void)dealloc;
- (BOOL)isReadable;
- (id)figChapterGroupInfo;
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
