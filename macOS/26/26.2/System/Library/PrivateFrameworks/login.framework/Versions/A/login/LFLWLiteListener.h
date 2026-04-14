@class LFNotify;
@protocol LFLWLiteListenerInterface;

@interface LFLWLiteListener : LFListener

@property (retain) LFNotify *notify;
@property (retain) id<LFLWLiteListenerInterface> messageHandler;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithMessageHandler:(id)a0;

@end
