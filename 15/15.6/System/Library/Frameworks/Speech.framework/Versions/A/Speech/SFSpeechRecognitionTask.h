@class SFSpeechRecognitionRequest, NSString, NSObject, NSOperationQueue, NSError, AFDictationConnection, SFLocalSpeechRecognitionClient;
@protocol OS_dispatch_queue;

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate, SFLocalSpeechRecognitionDelegate> {
    AFDictationConnection *_dictationConnection;
    SFLocalSpeechRecognitionClient *_sflsrClient;
    NSOperationQueue *_externalQueue;
    NSString *_languageCode;
    SFSpeechRecognitionRequest *_request;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSError *_error;
    char _completed;
    char _running;
}

@property (readonly, nonatomic) long long _taskHint;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isFinishing) char finishing;
@property (readonly, nonatomic, getter=isCancelled) char cancelled;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)finish;
- (void)cancel;
- (float)peakPower;
- (void)addRecordedSpeechSampleData:(id)a0;
- (float)averagePower;
- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)a0;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)a0;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)a0;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)a0;
- (void)stopSpeech;
- (id)_initWithRequest:(id)a0 queue:(id)a1 languageCode:(id)a2 taskHint:(long long)a3;
- (void)localSpeechRecognitionClient:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)localSpeechRecognitionClient:(id)a0 speechRecordingDidFail:(id)a1;
- (void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)a0;
- (void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)a0;

@end
