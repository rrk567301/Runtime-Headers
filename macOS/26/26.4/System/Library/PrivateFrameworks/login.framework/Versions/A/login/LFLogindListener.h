@class NSXPCInterface;
@protocol LFLogindListenerInterface;

@interface LFLogindListener : LFListener

@property (retain) id<LFLogindListenerInterface> messageHandler;
@property (retain) NSXPCInterface *privilegedInterface;

- (id)initWithMachServiceName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithMessageHandler:(id)a0;

@end
