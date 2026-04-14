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

+ (id)prepareInputsOperationsWithInputs:(id)a0;
+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)a0 andFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a1 andDelegate:(id)a2;

- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)areAllInputsPreferredMediaChunkAlignmentEqualTo:(long long)a0;
- (id)figEncryptionConfigDictionary;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)a0;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1;
- (BOOL)isConfiguredForFragmentedMPEG4;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForFragmentedMPEG4FileTypeProfile:(id)a0 preferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 returningDebugDescription:(id *)a2;
- (void)flush;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned int)encryptionScheme;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1 error:(id *)a2;
- (void)finishWriting;
- (void)prepareEncodedSampleBuffersForPaddedWrites;
- (struct OpaqueFigAssetWriter { } *)_retainedFigAssetWriter;
- (BOOL)hasProRes4KHighFPSVideoOutputSetting;
- (id)figTrackReferences;
- (void)dealloc;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)a0;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)a0;
- (void)flushSegment;
- (id)writerInputForTrackID:(int)a0;
- (BOOL)areAudioAndVideoOutputSettingsPassthrough;
- (void)cancelWriting;
- (void)setAllInputsFigPreferredChunkAlignmentTo:(long long)a0;
- (id)storageSpacePreallocationSize;
- (void)transitionToFailedStatusWithError:(id)a0;
- (BOOL)hasProResVideoOutputSetting;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)status;

@end
