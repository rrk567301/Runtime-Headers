@protocol LFSessionAgentListenerInterface;

@interface LFSessionAgentListener : LFListener

@property (retain) id<LFSessionAgentListenerInterface> messageHandler;

- (id)initWithMachServiceName:(id)a0;
- (id)init;
- (id)initWithMessageHandler:(id)a0;

@end
