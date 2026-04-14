@class NSXPCConnection;

@interface _LSDClient : NSObject

@property (readonly, retain) NSXPCConnection *XPCConnection;

- (id)initWithXPCConnection:(id)a0;
- (void)invokeServiceInvocation:(id)a0 isReply:(BOOL)a1;
- (void)didHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void).cxx_destruct;
- (void)handleXPCInvocation:(id)a0 isReply:(BOOL)a1;

@end
