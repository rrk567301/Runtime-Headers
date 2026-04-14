@class NSXPCInterface;
@protocol LFLogindListenerInterface;

@interface LFLogindListener : LFListener

@property (retain) id<LFLogindListenerInterface> messageHandler;
@property (retain) NSXPCInterface *privilegedInterface;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithMessageHandler:(id)a0;

@end
