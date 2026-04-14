@class XPCServer, CPCoreXPCService;

@interface CPCoreServerWrapper : NSObject

@property (retain, nonatomic) XPCServer *server;
@property (retain, nonatomic) CPCoreXPCService *service;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;

@end
