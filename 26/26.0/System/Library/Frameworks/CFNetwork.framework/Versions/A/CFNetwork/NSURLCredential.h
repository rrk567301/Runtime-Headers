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

- (id)user;
- (id)certificates;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (struct __SecIdentity { } *)identity;
- (id)_webKitPropertyListData;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (id)password;
- (struct _CFURLCredential { } *)_cfurlcredential;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (id)_initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2 persistence:(unsigned long long)a3;
- (BOOL)_hasSWCACreatorAttribute;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (id)initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2;
- (struct _CFURLCredential { } *)_CFURLCredential;
- (id)initWithCoder:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (void)_removeSWCACreatorAttribute;
- (BOOL)hasPassword;

@end
