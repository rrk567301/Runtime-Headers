@class NSNumber;

@interface CHIPBindingClusterTargetStruct : NSObject

@property (retain, nonatomic) NSNumber *fabricIndex;
@property (retain, nonatomic) NSNumber *node;
@property (retain, nonatomic) NSNumber *group;
@property (retain, nonatomic) NSNumber *endpoint;
@property (retain, nonatomic) NSNumber *cluster;

- (id)init;
- (void).cxx_destruct;

@end
