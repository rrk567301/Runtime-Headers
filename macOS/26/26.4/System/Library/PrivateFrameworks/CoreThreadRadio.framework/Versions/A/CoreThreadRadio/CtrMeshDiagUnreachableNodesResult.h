@class NSArray;

@interface CtrMeshDiagUnreachableNodesResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned char unreachableNodeCount;
@property (readonly) NSArray *unreachableNodes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUnreachableNodeCount:(unsigned char)a0 unreachableNodes:(id)a1;

@end
