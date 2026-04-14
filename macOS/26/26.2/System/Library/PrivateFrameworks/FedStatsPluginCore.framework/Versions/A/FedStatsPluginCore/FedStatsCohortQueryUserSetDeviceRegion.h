@class NSString;

@interface FedStatsCohortQueryUserSetDeviceRegion : NSObject <FedStatsCohortQueryProtocol>

@property (readonly, nonatomic) NSString *userSetDeviceRegion;

+ (id)cohortInstance;

- (void).cxx_destruct;
- (id)init;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;

@end
