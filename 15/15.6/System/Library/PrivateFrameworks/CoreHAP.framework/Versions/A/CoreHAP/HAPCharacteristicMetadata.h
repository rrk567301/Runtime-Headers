@class NSString, HAPMetadataConstraints;

@interface HAPCharacteristicMetadata : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) HAPMetadataConstraints *constraints;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSString *units;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_generateValidConstraints:(id)a0;
- (id)initWithConstraints:(id)a0 description:(id)a1 format:(id)a2 units:(id)a3;
- (char)isEqualToCharacteristicMetadata:(id)a0;

@end
