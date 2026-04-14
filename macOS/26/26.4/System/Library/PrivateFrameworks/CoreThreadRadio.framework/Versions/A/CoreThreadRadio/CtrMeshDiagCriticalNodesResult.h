@class NSArray;

@interface CtrMeshDiagCriticalNodesResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned char criticalNodeCount;
@property (readonly) NSArray *criticalNodes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCriticalNodeCount:(unsigned char)a0 criticalNodes:(id)a1;

@end
