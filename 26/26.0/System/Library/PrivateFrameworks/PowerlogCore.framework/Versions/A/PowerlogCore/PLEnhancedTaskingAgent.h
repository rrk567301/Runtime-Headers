@interface PLEnhancedTaskingAgent : PLAgent

+ (void)load;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitions;
+ (id)allowlistForSignpostAggregatedData;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)defaults;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;

- (void)initOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)log;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;
- (void)initTaskOperatorDependancies;
- (id)init;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;

@end
