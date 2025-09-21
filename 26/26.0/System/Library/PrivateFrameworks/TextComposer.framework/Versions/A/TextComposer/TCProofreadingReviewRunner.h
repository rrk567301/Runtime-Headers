@class NSMutableDictionary, NSTimer, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TCProofreadingReviewRunner : NSObject {
    NSMutableDictionary *_cachedGrammarDetailsDictionary;
    NSMutableArray *_cachedSentenceArray;
    NSMutableArray *_requestedSentenceArray;
    NSMutableArray *_queuedSentenceArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSTimer *_timer;
    NSDate *_lastRequestTime;
}

- (void)timerFired:(id)a0;
- (id)init;
- (void)resetTimer;
- (void).cxx_destruct;
- (double)timerInterval;
- (void)_handleResults:(id)a0 forString:(id)a1 sentences:(id)a2;
- (id)cachedGrammarDetailsForSentence:(id)a0 locale:(id)a1;
- (void)computeGrammarDetails;
- (void)computeGrammarDetailsForSentences:(id)a0;
- (id)grammarDetailsForSentence:(id)a0 locale:(id)a1;

@end
