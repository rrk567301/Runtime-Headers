@class NSXPCInterface;
@protocol LFLogindListenerInterface;

@interface LFLogindListener : LFListener

@property (retain) id<LFLogindListenerInterface> messageHandler;
@property (retain) NSXPCInterface *privilegedInterface;

- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMessageHandler:(id)a0;

@end
