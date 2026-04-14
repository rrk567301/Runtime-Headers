@interface UnifiedMessagingKit.ChannelLinkActionDelegate : NSObject <AMSChannelLinkTaskDelegate> {
    void /* unknown type, empty encoding */ objectGraph;
}

- (void)handleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;

@end
