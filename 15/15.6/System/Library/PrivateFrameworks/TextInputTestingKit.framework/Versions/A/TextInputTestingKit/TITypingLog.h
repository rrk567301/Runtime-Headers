@class NSMutableDictionary, NSMutableArray, TIKeystrokeRecord;

@interface TITypingLog : NSObject {
    NSMutableDictionary *_pathsForTokens;
    NSMutableArray *_correctedTransliterationForTokens;
    NSMutableArray *_intendedTransliterationForTokens;
    char _isTransliterating;
    NSMutableDictionary *_debugData;
}

@property (retain, nonatomic) NSMutableArray *currentKeystrokeSequence;
@property (retain, nonatomic) TIKeystrokeRecord *currentKeystroke;
@property (readonly, nonatomic) NSMutableArray *keystrokesForTokens;

+ (id)emptyTouchEventForLogging;
+ (id)typingLog;
+ (id)typingLogWithDebug:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (char)isDebugEnabled;
- (void)setTokenIndex:(unsigned long long)a0;
- (id)intendedTransliterationSequence;
- (id)getDebugObject:(id)a0;
- (void)addDebugObject:(id)a0 forKey:(id)a1;
- (char)adjustForContinuousPath;
- (void)beginKeystrokeWithIntendedKey:(id)a0 touchEvent:(id)a1 touchError:(id)a2;
- (void)beginKeystrokeWithIntendedKey:(id)a0 touchEvent:(id)a1 touchError:(id)a2 documentBefore:(id)a3;
- (void)beginToken;
- (id)correctedTransliterationSequence;
- (void)enumerateKeystrokesAndPathsForTokensWithBlock:(id /* block */)a0;
- (void)finishKeystrokeWithTouchedKey:(id)a0 touchEvent:(id)a1 insertedKey:(id)a2;
- (void)finishKeystrokeWithTouchedKey:(id)a0 touchEvent:(id)a1 insertedKey:(id)a2 predictionBarState:(id)a3 inlineCompletionBarState:(id)a4;
- (id)getDebugData;
- (id)initWithDebug:(char)a0;
- (void)logAcceptedCandidate:(id)a0;
- (void)logAcceptedCandidate:(id)a0 intendedTransliterationCandidate:(id)a1;
- (void)logAutocorrectionInserted;
- (void)logRejectedAutocorrection;
- (void)registerPathStringAsKeyStrokes:(id)a0 path:(id)a1 predictionBarState:(id)a2;
- (void)revisitPreviousToken;

@end
