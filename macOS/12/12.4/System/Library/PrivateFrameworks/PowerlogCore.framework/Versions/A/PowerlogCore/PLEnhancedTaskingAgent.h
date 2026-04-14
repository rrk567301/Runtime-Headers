@interface PLEnhancedTaskingAgent : PLAgent

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)allowlistForSignpostAggregatedData;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;

@end
