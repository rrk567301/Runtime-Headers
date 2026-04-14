@class NSNumber;

@interface CHIPBindingClusterTargetStruct : NSObject

@property (retain, nonatomic) NSNumber *node;
@property (retain, nonatomic) NSNumber *group;
@property (retain, nonatomic) NSNumber *endpoint;
@property (retain, nonatomic) NSNumber *cluster;
@property (retain, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (void).cxx_destruct;

@end
