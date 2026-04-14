@class NSString;

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *UUIDString;

+ (id)_LS_nullUUID;
+ (id)_LS_UUIDWithData:(id)a0 digestType:(long long)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)UUID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getUUIDBytes:(unsigned char[16])a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)initWithUUIDString:(id)a0;
- (struct __CFString { } *)_cfUUIDString;

@end
