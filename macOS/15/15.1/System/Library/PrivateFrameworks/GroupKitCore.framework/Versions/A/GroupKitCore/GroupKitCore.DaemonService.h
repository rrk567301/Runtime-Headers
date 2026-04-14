@class NSData, NSError;

@interface GroupKitCore.DaemonService : _TtCs12_SwiftObject <GroupKit.DaemonServiceProviding> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ dispatcher;
    void /* unknown type, empty encoding */ groupManager;
}

- (void)sendMessageAndWaitForReplyWith:(id)a0 completion:(id /* block */)a1;
- (void)sendMessageWith:(NSData *)a0 completionHandler:(void (^)(NSData *, NSError *))a1;

@end
