@class NSURL, AVCaptureFileOutputInternal_Tundra;
@protocol AVCaptureFileOutputDelegate_Tundra;

@interface AVCaptureFileOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureFileOutputInternal_Tundra *_fileOutputInternal;
}

@property (nonatomic) id<AVCaptureFileOutputDelegate_Tundra> delegate;
@property (readonly, nonatomic) NSURL *outputFileURL;
@property (readonly, nonatomic, getter=isRecording) char recording;
@property (readonly, nonatomic, getter=isRecordingPaused) char recordingPaused;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } recordedDuration;
@property (readonly, nonatomic) long long recordedFileSize;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxRecordedDuration;
@property (nonatomic) long long maxRecordedFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

- (void)dealloc;
- (void)stopRecording;
- (char)hasOutputSettingsForConnection:(id)a0;
- (void)resumeRecording;
- (id)applicationAnalytics;
- (id)avCaptureOutputSettingsForConnection:(id)a0 fileType:(id)a1;
- (int)compressorNodesMode;
- (char)delegateRequiresFrameAccurateStart;
- (id)initSubclass;
- (void)pauseRecording;
- (void)setCompressorNodesMode:(int)a0;
- (void)setOutputSettings:(id)a0 forConnection:(id)a1;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;

@end
