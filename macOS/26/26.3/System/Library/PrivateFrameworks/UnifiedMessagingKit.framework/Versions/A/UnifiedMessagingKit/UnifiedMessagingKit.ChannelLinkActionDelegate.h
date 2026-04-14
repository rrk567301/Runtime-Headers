@interface UnifiedMessagingKit.ChannelLinkActionDelegate : NSObject <AMSChannelLinkTaskDelegate> {
    void /* unknown type, empty encoding */ objectGraph;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 completion:(id /* block */)a1;

@end
