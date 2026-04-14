@class LFNotify;
@protocol LFLWLiteListenerInterface;

@interface LFLWLiteListener : LFListener

@property (retain) LFNotify *notify;
@property (retain) id<LFLWLiteListenerInterface> messageHandler;

- (id)initWithMachServiceName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMessageHandler:(id)a0;

@end
