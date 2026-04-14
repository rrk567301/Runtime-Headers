@class LNConnection;

@interface LNConnectionProxy : NSProxy

@property (readonly, nonatomic) LNConnection *connection;

+ (id)proxyWithConnection:(id)a0;

- (BOOL)conformsToProtocol:(id)a0;
- (id)logPrefix;
- (id)description;
- (id)initWithConnection:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
