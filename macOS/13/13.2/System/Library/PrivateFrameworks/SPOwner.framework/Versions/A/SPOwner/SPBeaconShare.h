@class NSUUID, SPHandle, NSDate;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (copy, nonatomic) SPHandle *owner;
@property (copy, nonatomic) SPHandle *sharee;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSDate *expirationDate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 beaconIdentifier:(id)a1 owner:(id)a2 sharee:(id)a3 state:(long long)a4 creationDate:(id)a5 expirationDate:(id)a6;

@end
