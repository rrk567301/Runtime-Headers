@protocol LFSessionLogoutListenerMessageHandler, LFSessionLogoutListenerInterface;

@interface LFSessionLogoutListener : LFListener

@property (retain) id<LFSessionLogoutListenerInterface, LFSessionLogoutListenerMessageHandler> messageHandler;

- (id)initWithMachServiceName:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithMessageHandler:(id)a0;

@end
