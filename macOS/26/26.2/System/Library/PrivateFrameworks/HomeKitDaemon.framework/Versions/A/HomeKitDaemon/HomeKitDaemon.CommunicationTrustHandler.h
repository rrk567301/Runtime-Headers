@class NSArray, NSError;

@interface HomeKitDaemon.CommunicationTrustHandler : NSObject <HMDCommunicationTrustHandlerProtocol>

- (void).cxx_destruct;
- (id)init;
- (void)isTrustedPersonWithAccountHandles:(NSArray *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end
