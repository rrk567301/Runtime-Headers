@interface PLEnhancedTaskingAgent : PLAgent

+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)allowlistForSignpostAggregatedData;
+ (void)load;
+ (id)defaults;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventIntervalDefinitionScrollView;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)entryEventIntervalDefinitionUINavigationController;

- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)log;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (id)init;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;

@end
