@interface PLStorageOperator : PLOperator

+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;

- (void)initOperatorDependancies;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (void)log;
- (void)logEventForwardSchemaChange:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventPointOTA:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventPointPreUnlock:(id)a0;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;

@end
