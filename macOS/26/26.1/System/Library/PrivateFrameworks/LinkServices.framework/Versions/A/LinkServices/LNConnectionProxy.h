@class LNConnection;

@interface LNConnectionProxy : NSProxy

@property (readonly, nonatomic) LNConnection *connection;

+ (id)proxyWithConnection:(id)a0;

- (id)logPrefix;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)description;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
