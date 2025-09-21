@class NSString, NSData;

@interface KTAccountPublicID : NSObject <NSCopying, NSSecureCoding> {
    struct _PCSPublicIdentityData { } *_publicIdentity;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *publicID;
@property (readonly) NSString *publicAccountIdentity;
@property (readonly) NSString *publicAccountPKI;
@property (readonly) NSData *publicKeyInfo;
@property (readonly) NSString *ktStorageString;

+ (id)ktAccountPublicIDWithString:(id)a0 error:(id *)a1;
+ (id)encodePublicKeyInfoDigestSuffix:(id)a0;
+ (id)ktAccountPublicIDWithPKIString:(id)a0 error:(id *)a1;
+ (id)ktAccountPublicIDWithPublicKeyInfo:(id)a0 error:(id *)a1;
+ (id)ktAccountPublicIDWithStorageString:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPublicKeyIdentity:(id)a0 error:(id *)a1;
- (id)initWithPublicKeyInfo:(id)a0 error:(id *)a1;
- (id)initWithStorageString:(id)a0 error:(id *)a1;

@end
