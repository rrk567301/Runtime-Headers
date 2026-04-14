@interface PLEnhancedTaskingAgent : PLAgent

+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)allowlistForSignpostAggregatedData;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;

- (void)initOperatorDependancies;
- (void)log;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (id)init;
- (void)initTaskOperatorDependancies;

@end
