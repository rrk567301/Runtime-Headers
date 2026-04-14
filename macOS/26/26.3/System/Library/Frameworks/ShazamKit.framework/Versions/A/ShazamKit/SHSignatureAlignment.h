@class SHRange;

@interface SHSignatureAlignment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float alignmentConfidence;
@property (readonly) SHRange *queryTimeRange;
@property (readonly) SHRange *referenceTimeRange;

- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithQueryRange:(id)a0 referenceRange:(id)a1 alignmentConfidence:(float)a2;

@end
