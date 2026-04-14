@protocol LFSessionLogoutListenerMessageHandler, LFSessionLogoutListenerInterface;

@interface LFSessionLogoutListener : LFListener

@property (retain) id<LFSessionLogoutListenerInterface, LFSessionLogoutListenerMessageHandler> messageHandler;

- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithMessageHandler:(id)a0;

@end
