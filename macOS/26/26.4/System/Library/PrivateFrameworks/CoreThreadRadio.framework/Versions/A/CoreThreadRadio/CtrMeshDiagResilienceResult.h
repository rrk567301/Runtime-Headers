@class CtrMeshDiagResilienceMetadata;

@interface CtrMeshDiagResilienceResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned char healthScore;
@property (readonly) CtrMeshDiagResilienceMetadata *metadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHealthScore:(unsigned char)a0 metadata:(id)a1;

@end
