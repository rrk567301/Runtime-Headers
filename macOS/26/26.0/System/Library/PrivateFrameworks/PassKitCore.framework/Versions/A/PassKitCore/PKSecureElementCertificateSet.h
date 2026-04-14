@class NSDictionary;

@interface PKSecureElementCertificateSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsLegacyFormats;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)certificateOfType:(unsigned long long)a0;
- (id)initWithRSACertificate:(id)a0 ECDSACertificate:(id)a1;

@end
