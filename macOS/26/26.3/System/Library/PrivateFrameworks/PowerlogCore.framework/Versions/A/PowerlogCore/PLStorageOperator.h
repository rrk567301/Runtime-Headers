@interface PLStorageOperator : PLOperator

+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;

- (void)logEventPointPLLog:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)log;
- (void)logEventPointPreUnlock:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (void)initOperatorDependancies;
- (void)logEventPointOTA:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventForwardTimeOffset:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventForwardSchemaChange:(id)a0;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;

@end
