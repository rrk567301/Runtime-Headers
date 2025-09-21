@class NSUUID, NSString, HKClinicalBrand;

@interface HKClinicalConnectedAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly, nonatomic) char needsRelogin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 brand:(id)a3 needsRelogin:(char)a4;

@end
