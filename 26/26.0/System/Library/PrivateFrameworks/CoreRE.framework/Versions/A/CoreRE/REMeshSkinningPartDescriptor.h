@class REAttributeDescriptor;

@interface REMeshSkinningPartDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL packedInfluence;
@property (readonly, nonatomic) unsigned char influencePerVertex;
@property (readonly, nonatomic) unsigned int skeletonIndex;
@property (readonly, nonatomic) REAttributeDescriptor *skinningInfluences;
@property (readonly, nonatomic) REAttributeDescriptor *influenceEndIndices;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addToSkinningModelBuilder:(void *)a0 payloadBuffers:(const void *)a1;
- (unsigned long long)estimateContainerSize;
- (id)initWithAttributeDescriptor:(const void *)a0 payloadBuilder:(void *)a1;
- (id)initWithSkeletonIndexAndInfluences:(unsigned int)a0 packedInfluence:(BOOL)a1 influencePerVertex:(unsigned char)a2 skinningInfluences:(id)a3 influenceEndIndices:(id)a4;
- (BOOL)validateWithPayloadSize:(const void *)a0 skeletonCount:(unsigned long long)a1 vertexCount:(unsigned long long)a2 error:(id *)a3;

@end
