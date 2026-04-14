@class NSString, NSIndexSet, NSArray;

@interface URLConnectionOptions : NSObject {
    struct __SecIdentity { } *fClientIdentityForAuth;
    BOOL fIsModernSystemKeychainSupported;
}

@property (copy) NSString *authUserName;
@property (copy) NSString *authPassword;
@property (copy) NSIndexSet *validStatusCodes;
@property BOOL ignoreInvalidServerCertificates;
@property (copy) NSArray *anchorCerts;
@property (copy) NSArray *pinningCerts;
@property unsigned long long pinningCertsRevocationFlags;
@property BOOL useATS;
@property BOOL allowRedirects;
@property BOOL useOriginalMethodForRedirects;
@property double timeoutIntervalForRequest;
@property BOOL preventAppSSO;

+ (id)defaultOptions;

- (struct __SecIdentity { } *)clientIdentity;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)modernSystemKeychainSupported;
- (void)setClientIdentity:(struct __SecIdentity { } *)a0 isModernSystemKeychainSupported:(BOOL)a1;

@end
