@class LNConnection;

@interface LNConnectionProxy : NSProxy

@property (readonly, nonatomic) LNConnection *connection;

+ (id)proxyWithConnection:(id)a0;

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithConnection:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)logPrefix;

@end
