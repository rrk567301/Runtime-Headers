@class SHRange;

@interface SHSignatureAlignment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float alignmentConfidence;
@property (readonly) SHRange *queryTimeRange;
@property (readonly) SHRange *referenceTimeRange;

- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithQueryRange:(id)a0 referenceRange:(id)a1 alignmentConfidence:(float)a2;

@end
