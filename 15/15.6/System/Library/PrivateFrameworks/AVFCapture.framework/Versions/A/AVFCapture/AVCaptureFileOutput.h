@class NSURL, AVCaptureFileOutputInternal;
@protocol AVCaptureFileOutputDelegate;

@interface AVCaptureFileOutput : AVCaptureOutput {
    AVCaptureFileOutputInternal *_fileOutputInternal;
}

@property (nonatomic) id<AVCaptureFileOutputDelegate> delegate;
@property (readonly, nonatomic) NSURL *outputFileURL;
@property (readonly, nonatomic, getter=isRecording) char recording;
@property (readonly, nonatomic, getter=isRecordingPaused) char recordingPaused;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } recordedDuration;
@property (readonly, nonatomic) long long recordedFileSize;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxRecordedDuration;
@property (nonatomic) long long maxRecordedFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

+ (void)initialize;

- (void)dealloc;
- (void)stopRecording;
- (void)resumeRecording;
- (id)initSubclass;
- (void)pauseRecording;
- (char)pausesRecordingOnInterruption;
- (void)setPausesRecordingOnInterruption:(char)a0;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;

@end
