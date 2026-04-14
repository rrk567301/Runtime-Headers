@class NSXPCConnection, NSXPCInterface;

@interface SPCodeEvaluationProxy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)showXProtectBlockedPrompt:(long long)a0 forUser:(unsigned int)a1 error:(id *)a2;

@end
