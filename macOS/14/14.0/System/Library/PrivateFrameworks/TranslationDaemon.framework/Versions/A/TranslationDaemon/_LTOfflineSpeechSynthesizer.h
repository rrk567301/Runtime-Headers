@class SiriTTSDaemonSession, SiriTTSSpeechRequest;

@interface _LTOfflineSpeechSynthesizer : NSObject {
    id /* block */ _completion;
    SiriTTSDaemonSession *_session;
    SiriTTSSpeechRequest *_currentRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCompletion:(id /* block */)a0;
- (void)speak:(id)a0 withContext:(id)a1;

@end
