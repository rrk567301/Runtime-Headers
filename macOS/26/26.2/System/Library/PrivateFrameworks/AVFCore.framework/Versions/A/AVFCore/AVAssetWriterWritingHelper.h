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

+ (id)finishWritingDelegateOperationWithAssetWriter:(id)a0 andFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a1 andDelegate:(id)a2;
+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
+ (id)prepareInputsOperationsWithInputs:(id)a0;

- (void)cancelWriting;
- (void)transitionToFailedStatusWithError:(id)a0;
- (BOOL)isConfiguredForFragmentedMPEG4;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)a0;
- (BOOL)hasProResVideoOutputSetting;
- (BOOL)areAllInputsPreferredMediaChunkAlignmentEqualTo:(long long)a0;
- (void)flush;
- (unsigned int)encryptionScheme;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)flushSegment;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)a0;
- (long long)status;
- (BOOL)areAudioAndVideoOutputSettingsPassthrough;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForFragmentedMPEG4FileTypeProfile:(id)a0 preferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 returningDebugDescription:(id *)a2;
- (BOOL)hasProRes4KHighFPSVideoOutputSetting;
- (void)setAllInputsFigPreferredChunkAlignmentTo:(long long)a0;
- (void)prepareEncodedSampleBuffersForPaddedWrites;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1 error:(id *)a2;
- (struct OpaqueFigAssetWriter { } *)_retainedFigAssetWriter;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (id)figTrackReferences;
- (id)storageSpacePreallocationSize;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (id)figEncryptionConfigDictionary;
- (id)writerInputForTrackID:(int)a0;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1;
- (void)finishWriting;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)a0;
- (void)dealloc;

@end
