@class NSArray;

@interface CtrMeshDiagUnreliableNodesResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned char unreliableNodeCount;
@property (readonly) NSArray *unreliableNodes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUnreliableNodeCount:(unsigned char)a0 unreliableNodes:(id)a1;

@end
