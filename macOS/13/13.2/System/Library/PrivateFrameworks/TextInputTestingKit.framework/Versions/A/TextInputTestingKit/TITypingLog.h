@class NSMutableDictionary, NSMutableArray, TIKeystrokeRecord;

@interface TITypingLog : NSObject {
    NSMutableDictionary *_pathsForTokens;
    NSMutableArray *_correctedTransliterationForTokens;
    NSMutableArray *_intendedTransliterationForTokens;
    BOOL _isTransliterating;
    NSMutableDictionary *_debugData;
}

@property (retain, nonatomic) NSMutableArray *currentKeystrokeSequence;
@property (retain, nonatomic) TIKeystrokeRecord *currentKeystroke;
@property (readonly, nonatomic) NSMutableArray *keystrokesForTokens;

+ (id)typingLog;
+ (id)typingLogWithDebug:(BOOL)a0;
+ (id)emptyTouchEventForLogging;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isDebugEnabled;
- (void)setTokenIndex:(unsigned long long)a0;
- (id)initWithDebug:(BOOL)a0;
- (void)beginToken;
- (void)revisitPreviousToken;
- (void)beginKeystrokeWithIntendedKey:(id)a0 touchEvent:(id)a1 touchError:(id)a2;
- (void)beginKeystrokeWithIntendedKey:(id)a0 touchEvent:(id)a1 touchError:(id)a2 documentBefore:(id)a3;
- (void)finishKeystrokeWithTouchedKey:(id)a0 touchEvent:(id)a1 insertedKey:(id)a2 predictionBarState:(id)a3;
- (void)finishKeystrokeWithTouchedKey:(id)a0 touchEvent:(id)a1 insertedKey:(id)a2;
- (void)registerPathStringAsKeyStrokes:(id)a0 path:(id)a1 predictionBarState:(id)a2;
- (void)logAcceptedCandidate:(id)a0;
- (void)logAcceptedCandidate:(id)a0 intendedTransliterationCandidate:(id)a1;
- (void)logRejectedAutocorrection;
- (void)enumerateKeystrokesAndPathsForTokensWithBlock:(id /* block */)a0;
- (id)getDebugData;
- (void)addDebugObject:(id)a0 forKey:(id)a1;
- (id)getDebugObject:(id)a0;
- (BOOL)adjustForContinuousPath;
- (id)correctedTransliterationSequence;
- (id)intendedTransliterationSequence;

@end
