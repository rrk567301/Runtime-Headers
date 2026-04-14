@interface _NSUUIDBridge : NSUUID <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithUUIDString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;

@end
