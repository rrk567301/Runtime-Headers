@class NSString, NSData;

@interface KTAccountPublicID : NSObject <NSCopying, NSSecureCoding> {
    struct _PCSPublicIdentityData { } *_publicIdentity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *publicID;
@property (readonly) NSString *publicAccountIdentity;
@property (readonly) NSString *publicAccountPKI;
@property (readonly) NSData *publicKeyInfo;
@property (readonly) NSString *ktStorageString;

+ (id)encodePublicKeyInfoDigestSuffix:(id)a0;
+ (id)ktAccountPublicIDWithPublicKeyInfo:(id)a0 error:(id *)a1;
+ (id)ktAccountPublicIDWithPKIString:(id)a0 error:(id *)a1;
+ (id)ktAccountPublicIDWithString:(id)a0 error:(id *)a1;
+ (id)ktAccountPublicIDWithStorageString:(id)a0 error:(id *)a1;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPublicKeyIdentity:(id)a0 error:(id *)a1;
- (id)initWithPublicKeyInfo:(id)a0 error:(id *)a1;
- (id)initWithStorageString:(id)a0 error:(id *)a1;

@end
