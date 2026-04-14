@class NSString, NSError;

@interface GESysdiagnoseXPCClient : NSObject {
    void /* unknown type, empty encoding */ client;
}

- (void).cxx_destruct;
- (id)init;
- (void)diagnosticsWithCompletionHandler:(void (^)(NSString *, NSError *))a0;

@end
