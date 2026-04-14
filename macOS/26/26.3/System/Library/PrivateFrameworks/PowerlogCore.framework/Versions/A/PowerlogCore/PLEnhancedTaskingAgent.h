@interface PLEnhancedTaskingAgent : PLAgent

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)defaults;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)allowlistForSignpostAggregatedData;

- (void)initTaskOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)log;
- (id)init;
- (void)initOperatorDependancies;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;

@end
