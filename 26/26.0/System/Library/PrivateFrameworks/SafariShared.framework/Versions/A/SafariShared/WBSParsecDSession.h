@class NSString, PARSession, WBSCompletionQuery, WBSParsecDFeedbackDispatcher;
@protocol WBSParsecFeedbackDispatcher, WBSParsecSearchSessionDelegate;

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession> {
    WBSParsecDFeedbackDispatcher *_feedbackDispatcher;
    WBSCompletionQuery *_currentQuery;
    NSString *_rewrittenQueryStringFromParsec;
    id<WBSParsecSearchSessionDelegate> _delegate;
}

@property unsigned long long currentQueryID;
@property (readonly, nonatomic) BOOL skipAutoFillDataUpdates;
@property (readonly, nonatomic) PARSession *parsecdSession;
@property (readonly, copy, nonatomic) NSString *rewrittenQueryStringFromParsec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, setter=setUIScale:) double uiScale;
@property (readonly, nonatomic) id<WBSParsecFeedbackDispatcher> feedbackDispatcher;

+ (void)_parsecEnabledDidChange:(id)a0;
+ (id)_sharedSessionConfiguration;
+ (void)_updateAutoFillTLDsIfNeededForSession:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_updateParsecAvailabilityInSessionConfiguration:(id)a0;
+ (void)clearAllParsecFeedbackAndEngagedCompletions;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;

- (void)setDelegate:(id)a0;
- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;
- (void).cxx_destruct;
- (void)setCurrentQuery:(id)a0;
- (void)_didReceiveResponse:(id)a0 error:(id)a1 forTask:(id)a2 query:(id)a3;
- (void)_setCurrentQuery:(id)a0 withKeyboardInputType:(id)a1;
- (void)_simulatePARResponseFromJSON:(id)a0 response:(id)a1 task:(id)a2 error:(id)a3;
- (void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)a0;
- (id)initWithParsecdSession:(id)a0 skipAutoFillDataUpdates:(BOOL)a1;

@end
