@class NSString, AVAssetWriterFigAssetWriterNotificationHandler, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    BOOL _figAssetWriterIsRemote;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    void *_figAssetWriterCallbackContextToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)a0 andFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a1 andDelegate:(id)a2;
+ (id)prepareInputsOperationsWithInputs:(id)a0;

- (id)figEncryptionConfigDictionary;
- (BOOL)isConfiguredForFragmentedMPEG4;
- (void)flushSegment;
- (void)dealloc;
- (BOOL)hasProRes4KHighFPSVideoOutputSetting;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)writerInputForTrackID:(int)a0;
- (BOOL)hasProResVideoOutputSetting;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)a0;
- (void)prepareEncodedSampleBuffersForPaddedWrites;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)storageSpacePreallocationSize;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)flush;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1 error:(id *)a2;
- (void)setAllInputsFigPreferredChunkAlignmentTo:(long long)a0;
- (unsigned int)encryptionScheme;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForFragmentedMPEG4FileTypeProfile:(id)a0 preferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 returningDebugDescription:(id *)a2;
- (BOOL)areAllInputsPreferredMediaChunkAlignmentEqualTo:(long long)a0;
- (id)figTrackReferences;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1;
- (long long)status;
- (void)transitionToFailedStatusWithError:(id)a0;
- (void)cancelWriting;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)a0;
- (struct OpaqueFigAssetWriter { } *)_retainedFigAssetWriter;
- (BOOL)areAudioAndVideoOutputSettingsPassthrough;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (void)finishWriting;

@end
