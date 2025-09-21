@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject

@property (retain, nonatomic) NSString *accessoryUUID;
@property (nonatomic) char previouslySentReachability;
@property (nonatomic) char currentReachability;
@property (nonatomic) unsigned long long previouslySentSuspendedState;
@property (nonatomic) unsigned long long currentSuspendedState;

+ (id)tupleWithAccessoryUUID:(id)a0 reachable:(char)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
