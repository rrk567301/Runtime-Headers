@class NSNumber, TIRevisionRateAnalysisSummary, NSString;

@interface TIRevisionRateAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (nonatomic) BOOL hasEmojiInput;
@property (nonatomic) BOOL hasCursorMovement;
@property (retain, nonatomic) NSNumber *sessionAlignmentConfidence;
@property (retain, nonatomic) TIRevisionRateAnalysisSummary *revisionRateAnalysisSummary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_createEventSpec;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (void)_registerAnalyticsEventSpecWithAnalyticsService;
- (id)getInputModeForSession:(id)a0;
- (id)init;
- (void)_dispatchEventPayloads:(id)a0 analyticsService:(id)a1 typingSession:(id)a2;
- (void)summarizeWithEventDictionary:(id)a0 withSession:(id)a1;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (id)getSessionFields;
- (void).cxx_destruct;

@end
