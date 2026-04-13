@class CKDOperationMetrics;

@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKDOperationMetrics *cloudKitMetrics;
@property (retain, nonatomic) CKDOperationMetrics *MMCSMetrics;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithCloudKitMetrics:(id)a0 andMMCSMetrics:(id)a1;

@end
