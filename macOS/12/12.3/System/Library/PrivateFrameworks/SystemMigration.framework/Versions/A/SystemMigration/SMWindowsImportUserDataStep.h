@class SMWindowsMacPathMapper;

@interface SMWindowsImportUserDataStep : SMMigrationEngineStep

@property (retain) SMWindowsMacPathMapper *windowsMacPathMap;

- (void).cxx_destruct;
- (id)postProcess;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (id)initWithEngine:(id)a0 pathMap:(id)a1;
- (BOOL)importDataForUsername:(id)a0 userID:(long long)a1 homeDirectory:(id)a2 parameters:(id)a3 error:(id *)a4;

@end
