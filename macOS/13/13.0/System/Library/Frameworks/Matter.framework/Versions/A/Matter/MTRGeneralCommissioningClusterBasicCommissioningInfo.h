@class NSNumber;

@interface MTRGeneralCommissioningClusterBasicCommissioningInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *failSafeExpiryLengthSeconds;
@property (copy, nonatomic) NSNumber *maxCumulativeFailsafeSeconds;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
