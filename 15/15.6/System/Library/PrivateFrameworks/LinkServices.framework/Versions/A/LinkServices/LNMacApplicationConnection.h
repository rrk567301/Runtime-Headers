@class LSApplicationRecord, NSXPCConnection;

@interface LNMacApplicationConnection : LNApplicationConnection

@property (retain, nonatomic) LSApplicationRecord *applicationRecord;
@property (retain, nonatomic) NSXPCConnection *mediatorConnection;
@property (nonatomic) char shouldTerminateOnFinish;
@property (readonly, nonatomic) char shouldTerminateApplication;

+ (Class)connectionOptionsClass;
+ (id)optionsForAction:(id)a0 interactionMode:(long long)a1 source:(unsigned short)a2 sourceOverride:(id)a3;

- (void).cxx_destruct;
- (void)close;
- (void)connectWithOptions:(id)a0;
- (void)attemptConnectionWithAuditTokenData:(id)a0;
- (void)openApplicationWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (char)refreshWithOptions:(id)a0;
- (char)shouldTerminateApplication:(id *)a0;

@end
