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

- (void)flushSegment;
- (void)cancelWriting;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)a0;
- (long long)status;
- (BOOL)hasProResVideoOutputSetting;
- (id)storageSpacePreallocationSize;
- (id)figTrackReferences;
- (void)flush;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForFragmentedMPEG4FileTypeProfile:(id)a0 preferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 returningDebugDescription:(id *)a2;
- (void)prepareEncodedSampleBuffersForPaddedWrites;
- (id)figEncryptionConfigDictionary;
- (struct OpaqueFigAssetWriter { } *)_retainedFigAssetWriter;
- (void)transitionToFailedStatusWithError:(id)a0;
- (void)setAllInputsFigPreferredChunkAlignmentTo:(long long)a0;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)a0;
- (BOOL)areAudioAndVideoOutputSettingsPassthrough;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)finishWriting;
- (BOOL)isConfiguredForFragmentedMPEG4;
- (id)initWithConfigurationState:(id)a0 assetWriter:(id)a1 error:(id *)a2;
- (id)writerInputForTrackID:(int)a0;
- (BOOL)areAllInputsPreferredMediaChunkAlignmentEqualTo:(long long)a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (BOOL)hasProRes4KHighFPSVideoOutputSetting;
- (unsigned int)encryptionScheme;

@end
