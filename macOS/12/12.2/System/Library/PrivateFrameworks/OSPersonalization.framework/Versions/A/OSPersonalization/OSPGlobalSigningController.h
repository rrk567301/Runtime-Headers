@class OSPRequest;

@interface OSPGlobalSigningController : NSObject

@property (retain) OSPRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)globallySignForAllDevicesAndVariantsWithCompletionHandler:(id /* block */)a0;

@end
