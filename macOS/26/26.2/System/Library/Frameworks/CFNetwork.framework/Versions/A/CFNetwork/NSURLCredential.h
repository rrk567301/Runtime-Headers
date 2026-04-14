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
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void)_removeSWCACreatorAttribute;
- (id)password;
- (id)initWithCoder:(id)a0;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (struct _CFURLCredential { } *)_CFURLCredential;
- (id)_initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2 persistence:(unsigned long long)a3;
- (id)certificates;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (id)initWithUser:(id)a0 password:(id)a1 initialAccess:(struct __SecAccess { } *)a2;
- (struct _CFURLCredential { } *)_cfurlcredential;
- (struct __SecIdentity { } *)identity;
- (BOOL)hasPassword;
- (BOOL)_hasSWCACreatorAttribute;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (id)_webKitPropertyListData;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (void)dealloc;

@end
