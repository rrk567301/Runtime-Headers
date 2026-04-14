@class NSXPCConnection;

@interface TIKeyboardInputManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithImplProxy:(id)a0;
- (id)init;
- (void)handleError:(id)a0 forRequest:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)handleRequest:(id)a0;

@end
