@class NSData;

@interface SPPeripheralConnectionMaterial : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *irkData;
@property (copy, nonatomic) NSData *btAddressData;
@property (copy, nonatomic) NSData *btAddressWithTypeData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
