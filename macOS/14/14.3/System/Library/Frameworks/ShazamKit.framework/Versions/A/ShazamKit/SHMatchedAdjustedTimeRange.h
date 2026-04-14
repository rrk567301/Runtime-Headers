@class SHRange;

@interface SHMatchedAdjustedTimeRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) SHRange *originalTimeRange;
@property (readonly) SHRange *updatedTimeRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (id)initWithOriginalTimeRange:(id)a0 updatedTimeRange:(id)a1;

@end
