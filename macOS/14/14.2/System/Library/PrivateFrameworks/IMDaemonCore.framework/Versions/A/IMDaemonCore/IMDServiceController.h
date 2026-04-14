@class NSMutableDictionary, NSArray;

@interface IMDServiceController : NSObject

@property (class, readonly, nonatomic) IMDServiceController *sharedController;

@property (retain, nonatomic) NSMutableDictionary *services;
@property (readonly, nonatomic) NSArray *allServices;

- (id)init;
- (void).cxx_destruct;
- (id)serviceWithName:(id)a0;
- (void)registerSessionClassWithBundle:(id)a0;
- (id)serviceWithReplicationSourceID:(long long)a0;

@end
