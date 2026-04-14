@class NSTask;

@interface UIRRemoteRecorder : NSObject {
    id _delegate;
    BOOL _isRecording;
    NSTask *_task;
    struct __UIRRemoteRecorderDelegateRespondTo { unsigned char uirRemoteRecorderWillStartRecording : 1; unsigned char uirRemoteRecorderWillStopRecording : 1; unsigned char uirRemoteRecorderDidStartRecording : 1; unsigned char uirRemoteRecorderDidStopRecording_withRecord : 1; unsigned char uirRemoteRecorder_didError : 1; unsigned int reserved : 27; } _delegateRespondTo;
}

+ (id)sharedInstance;
+ (id)uiRecorderPath;

- (void)setTask:(id)a0;
- (id)task;
- (void)stopRecording;
- (BOOL)isRecording;
- (id)delegate;
- (void)startRecording;
- (void)setDelegate:(id)a0;
- (id)init;
- (void)didError:(id)a0;
- (void)didStartRecording:(id)a0;
- (void)didStopRecording:(id)a0;
- (void)startRecordingEvents:(unsigned long long)a0 forApplication:(id)a1;

@end
