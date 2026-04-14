@class NSNumber;

@interface CHIPBindingClusterUnbindParams : NSObject

@property (retain, nonatomic) NSNumber *nodeId;
@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) NSNumber *endpointId;
@property (retain, nonatomic) NSNumber *clusterId;

- (id)init;
- (void).cxx_destruct;

@end
