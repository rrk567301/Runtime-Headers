@class NSString, NSArray, NSDictionary, TITypingSession, TIKeyboardState;
@protocol TIUserModeling;

@interface TIFavoniusTypingSessionAnalyzer : NSObject <TITypingSessionAnalyzing> {
    NSArray *_activeInputModes;
    NSDictionary *_testingParameters;
}

@property (retain, nonatomic) TITypingSession *currentSession;
@property (retain, nonatomic) NSString *lastMessage;
@property (weak, nonatomic) TIKeyboardState *lastMessageKeyboardState;
@property (nonatomic) double lastMessageStartTime;
@property (nonatomic) double lastMessageEndTime;
@property (nonatomic) int lastMessageWordsEntered;
@property (retain, nonatomic) id<TIUserModeling> userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)favoniusTypingSessionAnalyzerForUserModel:(id)a0;

- (void).cxx_destruct;
- (void)addDoubleToTransientCounter:(double)a0 forKey:(id)a1 andContext:(id)a2 andCandidateString:(id)a3;
- (void)addIntegerToTransientCounter:(int)a0 forKey:(id)a1 andContext:(id)a2 andCandidateString:(id)a3;
- (char)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (id)deleteLengthMetrics:(id)a0 nextWordEntryCandText:(id)a1;
- (int)durationInMillisecondsFromStartTime:(double)a0 endTime:(double)a1;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (void)handleDeleteWord:(id)a0 nextAction:(id)a1;
- (void)handlePath:(id)a0;
- (void)handleWordEntry:(id)a0;
- (void)incrementTransientCounterForKey:(id)a0 andContext:(id)a1 andCandidateString:(id)a2;
- (id)initWithUserModel:(id)a0;
- (char)isPathable:(id)a0 context:(id)a1;
- (void)logPathedCandidate:(id)a0 forKey:(id)a1 isCompletion:(char)a2;
- (void)reportLastMessage;
- (void)trackMessagesForAction:(id)a0;
- (void)updateDurationCounterForWord:(id)a0 forTypingContext:(id)a1;
- (char)updatePQTCountersForCandidate:(id)a0 withText:(id)a1 andContext:(id)a2;
- (void)updateSourceCountersForCandidate:(id)a0 withText:(id)a1 andContext:(id)a2 hasPQTSource:(char)a3;
- (void)updateTypingSpeedCounterForWord:(id)a0 forCandText:(id)a1;

@end
