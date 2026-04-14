@interface PLStorageOperator : PLOperator

+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)entryEventNoneDefinitionActivity;

- (void)initOperatorDependancies;
- (void)logEventPointArchive:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventPointPreUnlock:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventPointCacheFlush:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;
- (void)log;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventPointOTA:(id)a0;

@end
