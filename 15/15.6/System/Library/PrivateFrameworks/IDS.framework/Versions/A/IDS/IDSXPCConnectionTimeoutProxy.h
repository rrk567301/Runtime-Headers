@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject

@property (retain, nonatomic) id target;
@property (retain, nonatomic) IDSXPCConnection *connection;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ errorHandler;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (char)_invocationHasBlock:(id)a0;
- (id)initWithTarget:(id)a0 connection:(id)a1 timeoutInSeconds:(double)a2 errorHandler:(id /* block */)a3;

@end
