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

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0;
- (id)URL;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)_status;
- (BOOL)_isStreaming;
- (BOOL)isReadable;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelLoading;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)lyrics;
- (BOOL)hasProtectedContent;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isComposable;
- (id)assetInspector;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)figChapterGroupInfo;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (BOOL)_providesAccurateTiming;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;

@end
