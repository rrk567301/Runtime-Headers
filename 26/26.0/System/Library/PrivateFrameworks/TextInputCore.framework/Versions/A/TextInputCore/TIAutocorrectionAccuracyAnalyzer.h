@class TITypingSession, NSString;

@interface TIAutocorrectionAccuracyAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (retain, nonatomic) TITypingSession *currentSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)analyzeWordEntryAligned:(id)a0;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (void)registerEventSpec;
- (id)init;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (void).cxx_destruct;

@end
