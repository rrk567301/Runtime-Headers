@interface PLStorageOperator : PLOperator

+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;

- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)logEventPointOTA:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;

@end
