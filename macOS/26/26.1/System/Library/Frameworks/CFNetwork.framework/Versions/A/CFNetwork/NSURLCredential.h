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

- (id)password;
- (id)certificates;
- (struct __SecIdentity { } *)identity;
- (id)user;
- (struct _CFURLCredential { } *)_CFURLCredential;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (struct _CFURLCredential { } *)_cfurlcredential;
- (id)_initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2 persistence:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;
- (id)_webKitPropertyListData;
- (void)dealloc;
- (BOOL)_hasSWCACreatorAttribute;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (BOOL)hasPassword;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (void)_removeSWCACreatorAttribute;

@end
