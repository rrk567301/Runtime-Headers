@class NSArray, NSString, NSUUID, NSURL, _LTTranslator, _LTLocalePair, NSObject;
@protocol _LTStreamingUtteranceTranslating, _LTStreamingUtteranceTranslatorDelegate, OS_dispatch_queue;

@interface _LTStreamingUtteranceTranslator : NSObject <_LTStreamingUtteranceTranslating> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isFinished;
    _LTTranslator *_translator;
    id /* block */ _inProgressRequestCompletion;
    unsigned long long _inProgressRequestCount;
    NSUUID *_sessionID;
    NSArray *_spokenSegments;
    long long _currentGeneration;
    long long _lastSpokenGeneration;
}

@property (weak, nonatomic) id<_LTStreamingUtteranceTranslating> utteranceTranslator;
@property (nonatomic) BOOL allowOnlineTranslation;
@property (readonly, nonatomic) _LTLocalePair *localePair;
@property (readonly, nonatomic) NSURL *offlineMTModelURL;
@property (nonatomic) long long taskHint;
@property (weak, nonatomic) id<_LTStreamingUtteranceTranslatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addInput:(id)a0;
- (void)_handleError:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalePair:(id)a0;
- (void)_checkSpeakableSegmentsForResult:(id)a0 expectedGeneration:(long long)a1;
- (id)initWithLocalePair:(id)a0 offlineMTModel:(id)a1 taskHint:(long long)a2;
- (void)inputDidFinish;
- (void)translateInput:(id)a0 withGeneration:(long long)a1 completion:(id /* block */)a2;

@end
