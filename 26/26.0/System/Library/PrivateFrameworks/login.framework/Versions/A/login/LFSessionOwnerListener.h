@protocol LFSessionOwnerListenerInterface;

@interface LFSessionOwnerListener : LFListener

@property (retain) id<LFSessionOwnerListenerInterface> messageHandler;

- (id)initWithMachServiceName:(id)a0;
- (id)init;
- (id)initWithMessageHandler:(id)a0;

@end
