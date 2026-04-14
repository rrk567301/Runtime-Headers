@interface PLStorageOperator : PLOperator

+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventForwardDefinitionConfiguration;

- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)log;
- (void)logEventPointPreUnlock:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventPointOTA:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;
- (void)logEventForwardTimeOffset:(id)a0;

@end
