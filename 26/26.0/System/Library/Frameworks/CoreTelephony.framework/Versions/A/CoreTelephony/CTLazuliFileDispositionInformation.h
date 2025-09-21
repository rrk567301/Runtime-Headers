@class NSString, NSURL, NSNumber, CTLazuliFileCryptoMaterial;

@interface CTLazuliFileDispositionInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSNumber *fileSizeInBytes;
@property (retain, nonatomic) NSString *originalFileName;
@property (retain, nonatomic) NSString *untrustedContentType;
@property (retain, nonatomic) NSURL *dataUrl;
@property (retain, nonatomic) NSString *validUntil;
@property (nonatomic) long long disposition;
@property (retain, nonatomic) NSNumber *playingLengthInSeconds;
@property (retain, nonatomic) CTLazuliFileCryptoMaterial *cryptoMaterial;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliFileDispositionInformation:(id)a0;

@end
