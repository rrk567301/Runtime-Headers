@class NSDate, NSString, NSArray, NSUUID, NSSet, NSMutableArray, NSMutableSet, NSMutableOrderedSet, IASSessionManager;

@interface IASSmartReplyFeedbackAnalyzer : NSObject <IASAnalyzerProtocol>

@property (retain, nonatomic) NSMutableSet *sessionErrors;
@property (retain, nonatomic) NSSet *disallowedBundleIdsForCaching;
@property (copy, nonatomic) NSDate *dateOfLastAction;
@property (copy, nonatomic) NSString *cachedBundleId;
@property (copy, nonatomic) NSString *cachedOriginalContentString;
@property (retain, nonatomic) NSMutableOrderedSet *cachedModelInfo;
@property (retain, nonatomic) NSArray *cachedIntents;
@property (copy, nonatomic) NSString *cachedSelectedIntentString;
@property (copy, nonatomic) NSString *cachedBaseResponse;
@property (retain, nonatomic) NSMutableArray *cachedQuestionsOptionsAnswers;
@property (copy, nonatomic) NSString *cachedGeneratedContentString;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } depthRange;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) NSUUID *analyzerSessionId;
@property (weak, nonatomic) IASSessionManager *sessionManagerDelegate;

- (void).cxx_destruct;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (BOOL)shouldBeGarbageCollected;
- (void)cacheModelInfoAndOriginalContentStringForPayload:(id)a0 withDebugFrom:(id)a1;
- (void)feedbackSurveyCompletionHandler;
- (void)cacheBaseResponseForPayload:(id)a0;
- (void)cacheIntentsForPayload:(id)a0;
- (void)cacheQuestionnaireForPayload:(id)a0;
- (void)cacheRewriteForPayload:(id)a0;
- (void)cacheSelectedIntentForPayload:(id)a0;
- (BOOL)feedbackServiceIsActive;
- (id)getGeneratedContentString;
- (id)getModelInfoString;
- (void)handleChannel:(id)a0 signal:(id)a1 payload:(id)a2 bundleId:(id)a3;
- (void)triggerFeedbackUIForAction:(long long)a0 payload:(id)a1;
- (void)triggerFeedbackUIPresentedForPayload:(id)a0;
- (void)updateQuestionnaireAnswersForPayload:(id)a0;

@end
