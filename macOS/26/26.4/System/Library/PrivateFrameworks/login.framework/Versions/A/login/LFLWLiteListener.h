@class LFNotify;
@protocol LFLWLiteListenerInterface;

@interface LFLWLiteListener : LFListener

@property (retain) LFNotify *notify;
@property (retain) id<LFLWLiteListenerInterface> messageHandler;

- (id)initWithMachServiceName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithMessageHandler:(id)a0;

@end
