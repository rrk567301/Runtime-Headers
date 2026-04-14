@class NSData;

@interface CWFMACAddressHash : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *salt;
@property (retain, nonatomic) NSData *hashData;
@property (nonatomic) long long hashMethod;

+ (id)hashMACAddressData:(id)a0 withSalt:(id)a1;
+ (id)hashMethodFromString:(id)a0;
+ (id)parseMACAddress:(id)a0;
+ (id)stringFromHashMethod:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMACAddressData:(id)a0 andSalt:(id)a1;
- (id)initWithHashData:(id)a0 andSalt:(id)a1 andHashMethod:(long long)a2;
- (id)initWithMACAddress:(id)a0;
- (id)initWithMACAddress:(id)a0 andSalt:(id)a1;
- (id)initWithMACAddressData:(id)a0;
- (BOOL)matchesMACAddress:(id)a0;
- (BOOL)matchesMACAddressData:(id)a0;

@end
