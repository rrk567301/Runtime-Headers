@class LSApplicationRecord, NSXPCConnection;

@interface LNMacApplicationConnection : LNApplicationConnection

@property (retain, nonatomic) LSApplicationRecord *applicationRecord;
@property (retain, nonatomic) NSXPCConnection *mediatorConnection;
@property (nonatomic, getter=isColdLaunchedIntoBackground) BOOL coldLaunchedIntoBackground;
@property (readonly, nonatomic) BOOL shouldTerminateApplication;

+ (id)optionsForAction:(id)a0 interactionMode:(long long)a1;

- (void)close;
- (void).cxx_destruct;
- (id)defaultOptions;
- (void)connectWithOptions:(id)a0;
- (void)refreshWithOptions:(id)a0;
- (void)openApplicationWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)attemptConnectionWithAuditTokenData:(id)a0;
- (BOOL)shouldTerminateApplication:(id *)a0;

@end
