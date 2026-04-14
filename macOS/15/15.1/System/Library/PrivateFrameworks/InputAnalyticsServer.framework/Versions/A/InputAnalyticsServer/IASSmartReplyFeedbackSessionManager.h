@class NSSet;

@interface IASSmartReplyFeedbackSessionManager : IASMultiSourceSessionManager

@property (retain, nonatomic) NSSet *subscribedChannels;

- (id)init;
- (void).cxx_destruct;
- (void)didAction:(id)a0;
- (id)garbageCollect;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;

@end
