@class SMWindowsMacPathMapper;

@interface SMWindowsImportUserDataStep : SMMigrationEngineStep

@property (retain) SMWindowsMacPathMapper *windowsMacPathMap;

- (void).cxx_destruct;
- (id)prepare;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (id)importDataForUsername:(id)a0 userID:(long long)a1 homeDirectory:(id)a2 parameters:(id)a3;
- (id)initWithEngine:(id)a0 pathMap:(id)a1;
- (id)postProcess;
- (BOOL)setupWiFiProfiles:(id)a0 error:(id *)a1;

@end
