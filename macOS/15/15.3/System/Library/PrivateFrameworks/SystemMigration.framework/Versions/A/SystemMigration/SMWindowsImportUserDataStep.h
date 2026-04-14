@class SMWindowsMacPathMapper;

@interface SMWindowsImportUserDataStep : SMMigrationEngineStep

@property (retain) SMWindowsMacPathMapper *windowsMacPathMap;

- (void).cxx_destruct;
- (id)prepare;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (id)importDataForUsername:(id)a0 userID:(long long)a1 homeDirectory:(id)a2 parameters:(id)a3;
- (id)initWithPathMap:(id)a0;
- (id)postProcess;

@end
