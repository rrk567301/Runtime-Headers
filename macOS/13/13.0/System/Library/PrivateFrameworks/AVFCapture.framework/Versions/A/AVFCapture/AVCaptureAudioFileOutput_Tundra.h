@class NSArray, NSDictionary, AVCaptureAudioFileOutputInternal_Tundra;

@interface AVCaptureAudioFileOutput_Tundra : AVCaptureFileOutput_Tundra {
    AVCaptureAudioFileOutputInternal_Tundra *_internal;
}

@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSDictionary *audioSettings;

+ (void)initialize;
+ (id)new;
+ (id)availableOutputFileTypes;
+ (id)_avMetadataToID3Metadata:(id)a0;

- (void)dealloc;
- (id)init;
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
- (void)startRecordingToOutputFileURL:(id)a0 outputFileType:(id)a1 recordingDelegate:(id)a2;
- (id)stopError;
- (id)_stopError;
- (id)notReadyError;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (int)connectionGraphNodeForConnection:(id)a0;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (void)_startFileControlCallbackTimeoutTimer;
- (void)_refreshRecordingState;
- (void)_fileControlCallbackTimeout:(id)a0;
- (void)_cancelFileControlCallbackTimeoutTimer;
- (id)applicationAnalytics;
- (void)_cancelAllOperations;
- (void)_operationFailed:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })recordedDuration;
- (long long)recordedFileSize;
- (void)_startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
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

@end
