@class NSArray, NSError;

@interface HomeKitDaemon.CommunicationTrustHandler : NSObject <HMDCommunicationTrustHandlerProtocol>

- (id)init;
- (void).cxx_destruct;
- (void)isTrustedPersonWithAccountHandles:(NSArray *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end
