@interface PLStorageOperator : PLOperator

+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventPointDefinitionCacheFlush;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (void)logEventPointOTA:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;
- (void)logEventPointPreUnlock:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;

@end
