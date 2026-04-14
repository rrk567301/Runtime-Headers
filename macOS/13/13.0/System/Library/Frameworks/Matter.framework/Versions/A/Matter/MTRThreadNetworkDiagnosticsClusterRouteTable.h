@class NSNumber;

@interface MTRThreadNetworkDiagnosticsClusterRouteTable : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *extAddress;
@property (copy, nonatomic) NSNumber *rloc16;
@property (copy, nonatomic) NSNumber *routerId;
@property (copy, nonatomic) NSNumber *nextHop;
@property (copy, nonatomic) NSNumber *pathCost;
@property (copy, nonatomic) NSNumber *lqiIn;
@property (copy, nonatomic) NSNumber *lqiOut;
@property (copy, nonatomic) NSNumber *age;
@property (copy, nonatomic) NSNumber *allocated;
@property (copy, nonatomic) NSNumber *linkEstablished;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
