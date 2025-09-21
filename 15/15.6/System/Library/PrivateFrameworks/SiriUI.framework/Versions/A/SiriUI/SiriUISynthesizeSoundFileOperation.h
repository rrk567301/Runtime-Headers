@class NSSpeechSynthesizer, NSString, NSURL;

@interface SiriUISynthesizeSoundFileOperation : NSOperation <NSSpeechSynthesizerDelegate> {
    char _executing;
    char _finished;
}

@property (readonly) NSSpeechSynthesizer *synthesizer;
@property (readonly, copy) NSString *string;
@property (readonly, copy) NSURL *url;
@property (readonly) char speakingCompletedNormally;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(char)a1;
- (id)initWithSynthesizer:(id)a0 string:(id)a1 toURL:(id)a2;

@end
