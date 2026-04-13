@class MLModel, NSString;

@interface SNDetectorVariant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) MLModel *vggishBasedMLModel;
@property (readonly) NSString *detectorIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDetectorIdentifier:(id)a0;
- (BOOL)isEqualToDetectorVariant:(id)a0;
- (id)initWithVGGishBasedMLModel:(id)a0;

@end
