@class NSString, NSMutableDictionary, NSTimer, NSObject, NSMutableArray;
@protocol OS_os_transaction;

@interface TCTerminationEstimator : NSObject {
    NSString *_language;
    struct CoreLanguageModelWithState { } *_coreLM;
    NSObject<OS_os_transaction> *_coreLMTransaction;
    NSMutableDictionary *_cachedTerminationEstimateDictionary;
    NSMutableArray *_cachedSentenceArray;
    NSTimer *_idleTimer;
    double _coreLMLastTime;
    unsigned long long _coreLMCount;
    float _threshold;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (void)resetIdleTimer;
- (void)loadModel;
- (void)resetModel;
- (void)idleTimerFired:(id)a0;
- (float)terminationEstimateForSentence:(id)a0;
- (char)analyzeSentenceAsPotentiallyTerminated:(id)a0;
- (float)computedTerminationEstimateForSentence:(id)a0;

@end
