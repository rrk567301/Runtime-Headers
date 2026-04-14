@class LFNotify;
@protocol LFLWLiteListenerInterface;

@interface LFLWLiteListener : LFListener

@property (retain) LFNotify *notify;
@property (retain) id<LFLWLiteListenerInterface> messageHandler;

- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMessageHandler:(id)a0;

@end
