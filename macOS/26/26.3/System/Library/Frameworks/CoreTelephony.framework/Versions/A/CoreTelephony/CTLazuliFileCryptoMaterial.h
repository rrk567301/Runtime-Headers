@class NSData, NSNumber;

@interface CTLazuliFileCryptoMaterial : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long algorithm;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSData *aad;
@property (retain, nonatomic) NSData *authTag;
@property (retain, nonatomic) NSNumber *originalFileSizeInBytes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliFileCryptoMaterial:(id)a0;

@end
