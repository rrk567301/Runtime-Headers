@class LNConnection;

@interface LNConnectionProxy : NSProxy

@property (readonly, nonatomic) LNConnection *connection;

+ (id)proxyWithConnection:(id)a0;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)logPrefix;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;

@end
