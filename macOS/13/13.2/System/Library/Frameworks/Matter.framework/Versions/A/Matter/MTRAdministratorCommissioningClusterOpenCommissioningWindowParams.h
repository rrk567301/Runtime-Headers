@class NSNumber, NSData;

@interface MTRAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *commissioningTimeout;
@property (copy, nonatomic) NSData *pakeVerifier;
@property (copy, nonatomic) NSNumber *discriminator;
@property (copy, nonatomic) NSNumber *iterations;
@property (copy, nonatomic) NSData *salt;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
