@class NSString, NSURLCredentialInternal;

@interface NSURLCredential : NSObject <_CFNWebKitSecureCoding, NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long persistence;

+ (id)credentialForTrust:(struct __SecTrust { } *)a0;
+ (id)credentialWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
+ (id)credentialWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;

- (struct __SecIdentity { } *)identity;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (id)user;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (id)password;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (BOOL)hasPassword;
- (id)_initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2 persistence:(unsigned long long)a3;
- (id)certificates;
- (id)_webKitPropertyListData;
- (struct _CFURLCredential { } *)_cfurlcredential;
- (id)initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _CFURLCredential { } *)_CFURLCredential;
- (BOOL)isEqual:(id)a0;
- (void)_removeSWCACreatorAttribute;
- (BOOL)_hasSWCACreatorAttribute;
- (void)encodeWithCoder:(id)a0;

@end
