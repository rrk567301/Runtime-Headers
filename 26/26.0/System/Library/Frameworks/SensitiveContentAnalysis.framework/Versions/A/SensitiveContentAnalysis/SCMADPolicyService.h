@class MADService;

@interface SCMADPolicyService : NSObject

@property (readonly) MADService *service;

+ (BOOL)checkAvailability:(id *)a0;

- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0 error:(id *)a1;

@end
