@class NSNumber;

@interface MTRGeneralCommissioningClusterArmFailSafeParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *expiryLengthSeconds;
@property (copy, nonatomic) NSNumber *breadcrumb;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
