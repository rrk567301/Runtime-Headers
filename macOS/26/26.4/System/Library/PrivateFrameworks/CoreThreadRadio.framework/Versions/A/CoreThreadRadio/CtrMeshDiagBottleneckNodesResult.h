@class NSArray;

@interface CtrMeshDiagBottleneckNodesResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned char bottleneckNodeCount;
@property (readonly) NSArray *bottleneckNodes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBottleneckNodeCount:(unsigned char)a0 bottleneckNodes:(id)a1;

@end
