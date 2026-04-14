@interface PLEnhancedTaskingAgent : PLAgent

+ (void)load;
+ (id)allowlistForSignpostAggregatedData;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionScrollView;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;

- (void)initOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)initTaskOperatorDependancies;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;
- (void)log;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (id)init;

@end
