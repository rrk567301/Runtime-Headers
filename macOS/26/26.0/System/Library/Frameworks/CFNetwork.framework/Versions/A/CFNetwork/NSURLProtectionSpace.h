@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <_CFNWebKitSecureCoding, NSSecureCoding, NSCopying> {
    NSURLProtectionSpaceInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *realm;
@property (readonly) BOOL receivesCredentialSecurely;
@property (readonly) BOOL isProxy;
@property (readonly, copy) NSString *host;
@property (readonly) long long port;
@property (readonly, copy) NSString *proxyType;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *authenticationMethod;

- (id)_initWithWebKitPropertyListData:(id)a0;
- (id)_webKitPropertyListData;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (struct _CFURLProtectionSpace { } *)_CFURLProtectionSpace;
- (struct _CFURLProtectionSpace { } *)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { } *)a0;
- (void)_setDistinguishedNames:(id)a0;
- (void)_setServerTrust:(struct __SecTrust { } *)a0;
- (id)distinguishedNames;
- (id)initWithHost:(id)a0 port:(long long)a1 protocol:(id)a2 realm:(id)a3 authenticationMethod:(id)a4;
- (id)initWithProxyHost:(id)a0 port:(long long)a1 type:(id)a2 realm:(id)a3 authenticationMethod:(id)a4;
- (struct __SecTrust { } *)serverTrust;

@end
