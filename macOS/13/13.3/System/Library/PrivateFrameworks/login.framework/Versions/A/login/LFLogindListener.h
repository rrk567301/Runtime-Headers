@class NSXPCInterface;
@protocol LFLogindListenerInterface;

@interface LFLogindListener : LFListener

@property (retain) id<LFLogindListenerInterface> messageHandler;
@property (retain) NSXPCInterface *privilegedInterface;

- (void)dealloc;
- (id)init;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithMessageHandler:(id)a0;

@end
