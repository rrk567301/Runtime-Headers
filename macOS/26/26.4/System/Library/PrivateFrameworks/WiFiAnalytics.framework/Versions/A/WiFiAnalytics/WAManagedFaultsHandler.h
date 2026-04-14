@class W5Client;

@interface WAManagedFaultsHandler : NSObject

@property (retain) W5Client *velocityClient;

+ (id)sharedManagedFaultsHandler;

- (void).cxx_destruct;
- (id)init;
- (void)processManagedFault:(id)a0 at:(id)a1;

@end
