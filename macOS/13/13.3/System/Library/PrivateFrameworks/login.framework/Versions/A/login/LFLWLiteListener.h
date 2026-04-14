@class LFNotify;
@protocol LFLWLiteListenerInterface;

@interface LFLWLiteListener : LFListener

@property (retain) LFNotify *notify;
@property (retain) id<LFLWLiteListenerInterface> messageHandler;

- (void)dealloc;
- (id)init;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithMessageHandler:(id)a0;

@end
