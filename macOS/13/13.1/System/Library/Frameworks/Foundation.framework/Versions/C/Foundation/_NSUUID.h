@interface _NSUUID : NSUUID <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)initWithUUIDString:(id)a0;

@end
