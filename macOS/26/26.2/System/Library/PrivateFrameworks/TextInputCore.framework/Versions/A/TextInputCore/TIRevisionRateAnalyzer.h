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

- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (void)_registerAnalyticsEventSpecWithAnalyticsService;
- (void).cxx_destruct;
- (id)getInputModeForSession:(id)a0;
- (id)_createEventSpec;
- (id)init;
- (void)summarizeWithEventDictionary:(id)a0 withSession:(id)a1;
- (void)_dispatchEventPayloads:(id)a0 analyticsService:(id)a1 typingSession:(id)a2;
- (id)getSessionFields;

@end
