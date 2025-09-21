@class NSString, NSDictionary, NSArray, NSDate;

@interface IDSPseudonymProperties : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double expiryEpoch;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *featureID;
@property (readonly, nonatomic) NSString *scopeID;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *allowedServices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithFeatureID:(id)a0 scopeID:(id)a1 expiryEpoch:(double)a2 allowedServices:(id)a3;
- (char)isEqualToPseudonymProperties:(id)a0;
- (char)hasBeenExpiredForAtLeast:(double)a0;
- (char)willBeExpiredIn:(double)a0;
- (id)withUpdatedAllowedServices:(id)a0;
- (id)withUpdatedExpiryEpoch:(double)a0;

@end
