@class PLXPCListenerOperatorComposition, PLService;

@interface PLDuetServiceDAS : NSObject

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *dasActivityEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasActivityLifecycleEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasInfoEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasPredictionEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasBudgetEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasDataBudgetEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasEnergyReportEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasPoliciesBlockingCriteriaEventListener;
@property (retain) PLXPCListenerOperatorComposition *dasTrialEventListener;

+ (id)entryEventNoneDefinitionsDASActivityLifecycle;
+ (id)entryEventForwardDefinitionsDASTrial;
+ (id)entryEventNoneDefinitionsDASActivity;
+ (id)entryEventNoneDefinitionsDASActivityDropCount;
+ (id)entryEventForwardDefinitionsDASPrediction;
+ (id)entryEventForwardDefinitionsDASEnergyBudgetAvailable;
+ (id)entryEventForwardDefinitionsDASDataBudgetAvailable;
+ (id)entryEventNoneDefinitionsDASInfo;
+ (id)entryEventBackwardDefinitionsDASEnergyBudgetReport;
+ (id)entryEventNoneDefinitionsDASPoliciesBlockingCriteria;
+ (id)entryEventForwardDefinitionsDASApplicationPrediction;

- (void)didReceiveDASPredictionEventWithPayload:(id)a0;
- (long long)fileProtectionTypeStringToEnum:(id)a0;
- (void)didReceiveDASTrialEventWithPayload:(id)a0;
- (void)didReceiveDASPoliciesBlockingCriteriaEventWithPayload:(id)a0;
- (void)stopService;
- (void)didReceiveDASActivityEventWithPayload:(id)a0;
- (void)didReceiveDASReportEventWithPayload:(id)a0;
- (void)didReceiveDASBudgetEventWithPayload:(id)a0;
- (void)didReceiveDASInfoEventWithPayload:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveDASActivityLifecycleEventWithPayload:(id)a0;
- (void)initOperatorDependanciesDAS:(id)a0;
- (id)init;

@end
