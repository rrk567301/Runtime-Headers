@class TITypingSession, NSString;

@interface TIAutocorrectionAccuracyAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (retain, nonatomic) TITypingSession *currentSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (void)registerEventSpec;
- (BOOL)analyzeWordEntryAligned:(id)a0;

@end
