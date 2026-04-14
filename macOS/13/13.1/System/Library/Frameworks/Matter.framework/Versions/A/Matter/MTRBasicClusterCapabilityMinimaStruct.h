@class NSNumber;

@interface MTRBasicClusterCapabilityMinimaStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *caseSessionsPerFabric;
@property (copy, nonatomic) NSNumber *subscriptionsPerFabric;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
