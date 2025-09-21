@class NSString;

@interface HKMedicationDisplayNameComponents : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *fullDisplayName;
@property (readonly, copy, nonatomic) NSString *medicationDisplayName;
@property (readonly, copy, nonatomic) NSString *displayStrength;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFullDisplayName:(id)a0 medicationDisplayName:(id)a1 displayStrength:(id)a2;

@end
