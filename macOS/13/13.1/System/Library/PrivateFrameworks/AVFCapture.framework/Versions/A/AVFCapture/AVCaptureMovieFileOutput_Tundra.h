@class NSArray, AVCaptureMovieFileOutputInternal_Tundra;

@interface AVCaptureMovieFileOutput_Tundra : AVCaptureFileOutput_Tundra {
    AVCaptureMovieFileOutputInternal_Tundra *_internal;
}

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } movieFragmentInterval;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (nonatomic, getter=isPrimaryConstituentDeviceSwitchingBehaviorForRecordingEnabled) BOOL primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;
@property (readonly, nonatomic) long long primaryConstituentDeviceSwitchingBehaviorForRecording;
@property (readonly, nonatomic) unsigned long long primaryConstituentDeviceRestrictedSwitchingBehaviorConditionsForRecording;

+ (void)initialize;
+ (id)new;
+ (BOOL)updateMovieMetadataInFile:(id)a0 withMetadata:(id)a1 error:(id *)a2;
+ (id)commonMetadataForAVMetadataItemArray:(id)a0;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeConnection:(id)a0;
- (void)stopRecording;
- (BOOL)isRecording;
- (id)addConnection:(id)a0 error:(id *)a1;
- (id)connectionMediaTypes;
- (BOOL)isRecordingPaused;
- (void)pauseRecording;
- (void)resumeRecording;
- (id)outputFileURL;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
- (id)_stopError;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (int)connectionGraphNodeForConnection:(id)a0;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (void)_updateVideoDecompressorNodeForConnection:(id)a0;
- (void)_updateVideoFrameRateGovernorNodeForConnection:(id)a0;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (BOOL)supportsVideoMirroringForConnection:(id)a0;
- (BOOL)supportsVideoOrientationForConnection:(id)a0;
- (BOOL)supportsVideoFieldModeForConnection:(id)a0;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)a0;
- (void)setOutputSettings:(id)a0 forConnection:(id)a1;
- (void)_startFileControlCallbackTimeoutTimer;
- (void)_refreshRecordingState;
- (void)_fileControlCallbackTimeout:(id)a0;
- (void)_cancelFileControlCallbackTimeoutTimer;
- (id)applicationAnalytics;
- (void)_cancelAllOperations;
- (void)_operationFailed:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })recordedDuration;
- (long long)recordedFileSize;
- (void)_setPaused:(BOOL)a0;
- (id)_runningRecordingOperationDescriptor;
- (void)_setRunningRecordingOperationDescriptor:(id)a0;
- (BOOL)_removeRunningRecordingOperationDescriptorEqualTo:(id)a0;
- (void)_setStopError:(id)a0;
- (id)_activeConnections;
- (void)_addActiveConnection:(id)a0;
- (void)_removeActiveConnection:(id)a0;
- (id)_noDataConnections;
- (void)_setNoDataConnections:(id)a0;
- (void)_handleCanceledOperations:(id)a0;
- (BOOL)setEnabled:(BOOL)a0 forConnection:(id)a1;
- (void)graphWillStartForSession:(id)a0;
- (void)graphWillStopForSession:(id)a0 error:(id)a1;
- (BOOL)getAudioSplitterNode:(int *)a0 andAudioMixerNode:(int *)a1 forConnection:(id)a2;
- (unsigned int)_fileWriterUnitElementForConnection:(id)a0;
- (void)_controlFileWritingForConnection:(id)a0 busNumber:(unsigned int)a1 fileControlToken:(struct OpaqueFileWritingControlToken { } *)a2;
- (void)_startFileWritingForConnection:(id)a0 fileControlToken:(struct OpaqueFileWritingControlToken { } *)a1 runningRecordingOperationDescriptor:(id)a2;
- (void)_stopFileWritingForConnection:(id)a0 fileControlToken:(struct OpaqueFileWritingControlToken { } *)a1 runningRecordingOperationDescriptor:(id)a2 stopWritingFlags:(unsigned int)a3 stopError:(id)a4;
- (void)_forciblyStopFileWritingForRunningRecordingOperation;
- (void)_filesCompleted:(id)a0;
- (int)_compressorDidRenderConnection:(id)a0 busNumber:(unsigned int)a1 processHints:(unsigned int *)a2 sampleBuffer:(struct opaqueCMSampleBuffer **)a3;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_syncTime;
- (id)supportedOutputSettingsKeysForConnection:(id)a0;
- (void)setPrimaryConstituentDeviceSwitchingBehaviorForRecording:(long long)a0 restrictedSwitchingBehaviorConditions:(unsigned long long)a1;
- (id)outputSettingsForConnection:(id)a0;
- (BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)a0;
- (void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)a0 asMetadataTrackForConnection:(id)a1;
- (void)_addFileWriterUnitElement:(unsigned int)a0 forConnection:(id)a1;
- (void)_removeFileWriterUnitElementForConnection:(id)a0;

@end
