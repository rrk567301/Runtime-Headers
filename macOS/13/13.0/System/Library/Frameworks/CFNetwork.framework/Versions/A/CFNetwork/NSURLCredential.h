@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long persistence;

+ (id)credentialWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
+ (id)credentialWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
+ (id)credentialForTrust:(struct __SecTrust { } *)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)user;
- (id)password;
- (struct __SecIdentity { } *)identity;
- (id)certificates;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (id)initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2;
- (id)_initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2 persistence:(unsigned long long)a3;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (const struct _CFURLCredential { } *)_cfurlcredential;
- (const struct _CFURLCredential { } *)_CFURLCredential;
- (BOOL)hasPassword;
- (BOOL)_hasSWCACreatorAttribute;
- (void)_removeSWCACreatorAttribute;

@end
