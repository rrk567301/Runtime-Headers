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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)URL;
- (long long)_status;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_isStreaming;
- (BOOL)isReadable;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelLoading;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)lyrics;
- (BOOL)hasProtectedContent;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isComposable;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)figChapterGroupInfo;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)assetInspector;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (BOOL)_inspectionRequiresAFormatReader;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (BOOL)_providesAccurateTiming;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;

@end
