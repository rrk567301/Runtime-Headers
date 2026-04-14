@interface ARDaemonStatusLogger : NSObject

- (void)_logOrGenerateString:(id)a0 fromDictionary:(id)a1 forServerObject:(id)a2 andProcessName:(id)a3;
- (void)_logProcessInformationFromDictionary:(id)a0 forServerObject:(id)a1 andProcessName:(id)a2 generatedTestString:(id)a3;
- (void)_logSystemInformationFromDictionary:(id)a0 forServerObject:(id)a1 generatedTestString:(id)a2;
- (id)generateStringFromStatusDictionary:(id)a0 forServerObject:(id)a1 andProcessName:(id)a2;
- (void)logStatusUpdateWithDictionary:(id)a0 forServerObject:(id)a1 andProcessName:(id)a2;

@end
