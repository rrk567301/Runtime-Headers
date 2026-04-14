@class NSMutableDictionary, NSArray;

@interface IMDServiceController : NSObject

@property (class, readonly, nonatomic) IMDServiceController *sharedController;

@property (retain, nonatomic) NSMutableDictionary *services;
@property (retain, nonatomic) NSMutableDictionary *serviceCapabilityCache;
@property (retain, nonatomic) NSMutableDictionary *serviceNameCapabilityCache;
@property (readonly, nonatomic) NSArray *allServices;

- (id)serviceWithReplicationSourceID:(long long)a0;
- (id)serviceNamesSupportingCapability:(id)a0;
- (id)init;
- (id)serviceWithName:(id)a0;
- (void)registerSessionClassWithBundle:(id)a0;
- (BOOL)_bundleAllowedToLoadWithProperties:(id)a0;
- (id)servicesSupportingCapability:(id)a0;
- (void).cxx_destruct;

@end
