@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject

@property (retain, nonatomic) NSString *accessoryUUID;
@property (nonatomic) BOOL previouslySentReachability;
@property (nonatomic) BOOL currentReachability;
@property (nonatomic) unsigned long long previouslySentSuspendedState;
@property (nonatomic) unsigned long long currentSuspendedState;

+ (id)tupleWithAccessoryUUID:(id)a0 reachable:(BOOL)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
