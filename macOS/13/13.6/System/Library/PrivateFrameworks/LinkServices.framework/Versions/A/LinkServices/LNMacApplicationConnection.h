@class LSApplicationRecord, NSXPCConnection;

@interface LNMacApplicationConnection : LNApplicationConnection

@property (retain, nonatomic) LSApplicationRecord *applicationRecord;
@property (retain, nonatomic) NSXPCConnection *mediatorConnection;
@property (nonatomic, getter=isColdLaunchedIntoBackground) BOOL coldLaunchedIntoBackground;
@property (readonly, nonatomic) BOOL shouldTerminateApplication;

+ (id)optionsForAction:(id)a0 interactionMode:(long long)a1 source:(unsigned short)a2;

- (void).cxx_destruct;
- (void)close;
- (id)defaultOptions;
- (void)connectWithOptions:(id)a0;
- (void)attemptConnectionWithAuditTokenData:(id)a0;
- (void)openApplicationWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)refreshWithOptions:(id)a0;
- (BOOL)shouldTerminateApplication:(id *)a0;

@end
