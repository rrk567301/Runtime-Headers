@class HMXPCServerInternal;

@interface HMXPCServer : NSObject

@property (readonly, nonatomic) HMXPCServerInternal *xpcServer;

- (void).cxx_destruct;
- (void)start;
- (id)initWithStoreURL:(id)a0;

@end
