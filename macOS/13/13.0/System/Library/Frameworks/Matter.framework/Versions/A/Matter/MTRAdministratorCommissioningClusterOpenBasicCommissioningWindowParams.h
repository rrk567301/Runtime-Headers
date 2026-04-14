@class NSNumber;

@interface MTRAdministratorCommissioningClusterOpenBasicCommissioningWindowParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *commissioningTimeout;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
