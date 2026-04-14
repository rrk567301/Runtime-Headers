@class NSDictionary;

@interface CodeIdentity : NSObject {
    BOOL _haveCheckedValidity;
    NSDictionary *_cached_entitlements;
}

@property (readonly) struct __SecCode { } *codeRef;

+ (unsigned int)minimalValidationFlags;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)bundleIdentifierWithError:(id *)a0;
- (id)bundleIdentifier;
- (BOOL)validate;
- (id)signingIdentifier;
- (id)designatedRequirement;
- (BOOL)isAppSandboxed;
- (id)pathURL;
- (id)initWithSecCodeRef:(struct __SecCode { } *)a0;
- (BOOL)validateWithFlags:(unsigned int)a0;
- (BOOL)validateWithFlags:(unsigned int)a0 additionalRequirement:(id)a1 error:(id *)a2;
- (id)signingInformation:(unsigned int)a0;
- (id)getSigningInformation:(unsigned int)a0 error:(id *)a1;
- (id)getEntitlementsAndReturnError:(id *)a0;
- (BOOL)hasEntitlement:(id)a0 error:(id *)a1;
- (BOOL)inheritsSandbox;

@end
