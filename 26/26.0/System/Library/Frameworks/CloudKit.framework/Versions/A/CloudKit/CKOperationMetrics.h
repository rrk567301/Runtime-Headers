@class CKMetric;

@interface CKOperationMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKMetric *cloudKitMetrics;
@property (readonly, copy, nonatomic) CKMetric *MMCSMetrics;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudKitMetrics:(id)a0 MMCSMetrics:(id)a1;
- (void).cxx_destruct;

@end
