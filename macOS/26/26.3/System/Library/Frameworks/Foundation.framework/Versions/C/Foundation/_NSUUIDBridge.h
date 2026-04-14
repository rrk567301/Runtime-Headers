@interface _NSUUIDBridge : NSUUID <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithUUIDString:(id)a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
