@class NSNumber;

@interface MTRGeneralCommissioningClusterBasicCommissioningInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *failSafeExpiryLengthSeconds;
@property (copy, nonatomic) NSNumber *maxCumulativeFailsafeSeconds;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
