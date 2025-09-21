@class NSXPCConnection;

@interface TIKeyboardInputManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (char)instancesRespondToSelector:(SEL)a0;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (char)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0;
- (void)handleError:(id)a0 forRequest:(id)a1;
- (id)initWithImplProxy:(id)a0;

@end
