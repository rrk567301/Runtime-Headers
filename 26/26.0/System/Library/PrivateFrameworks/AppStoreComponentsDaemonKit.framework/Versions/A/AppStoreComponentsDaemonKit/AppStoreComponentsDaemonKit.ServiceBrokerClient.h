@interface AppStoreComponentsDaemonKit.ServiceBrokerClient : NSObject <ASCServiceBroker> {
    void /* unknown type, empty encoding */ session;
}

- (id)init;
- (void).cxx_destruct;
- (void)getMetricsServiceWithReplyHandler:(id /* block */)a0;
- (void)testConnectionWithReplyHandler:(id /* block */)a0;
- (void)getAppOfferStateServiceForDelegate:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)getLockupFetcherServiceWithReplyHandler:(id /* block */)a0;
- (void)getUtilityServiceWithReplyHandler:(id /* block */)a0;

@end
