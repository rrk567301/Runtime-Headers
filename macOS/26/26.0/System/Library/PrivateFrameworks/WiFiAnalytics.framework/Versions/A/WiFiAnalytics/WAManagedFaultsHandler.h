@class W5Client;

@interface WAManagedFaultsHandler : NSObject

@property (retain) W5Client *velocityClient;

+ (id)sharedManagedFaultsHandler;

- (id)init;
- (void).cxx_destruct;
- (void)processManagedFault:(id)a0 at:(id)a1;

@end
