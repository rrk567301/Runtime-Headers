@class LSApplicationRecord, NSXPCConnection;

@interface LNMacApplicationConnection : LNApplicationConnection

@property (retain, nonatomic) LSApplicationRecord *applicationRecord;
@property (retain, nonatomic) NSXPCConnection *mediatorConnection;
@property (nonatomic) BOOL shouldTerminateOnFinish;
@property (readonly, nonatomic) BOOL shouldTerminateApplication;

+ (Class)connectionOptionsClass;

- (void)close;
- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (void)attemptConnectionWithAuditTokenData:(id)a0;
- (void)openApplicationWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)optionsForAction:(id)a0 interactionMode:(long long)a1 source:(unsigned short)a2 sourceOverride:(id)a3 assistantDismissalPolicy:(long long)a4;
- (BOOL)refreshWithOptions:(id)a0;
- (BOOL)shouldTerminateApplication:(id *)a0;

@end
