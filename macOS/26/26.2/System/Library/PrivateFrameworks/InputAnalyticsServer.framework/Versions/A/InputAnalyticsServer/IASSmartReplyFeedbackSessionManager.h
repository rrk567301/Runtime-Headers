@class NSSet;

@interface IASSmartReplyFeedbackSessionManager : IASMultiSourceSessionManager

@property (retain, nonatomic) NSSet *subscribedChannels;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)didAction:(id)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 testingDelegate:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBundleIdBeConcatenated:(id)a0;

@end
