@class NSDictionary;

@interface CodeIdentity : NSObject {
    BOOL _haveCheckedValidity;
    NSDictionary *_cachedInfoPlist;
    NSDictionary *_cachedEntitlements;
}

@property (readonly) struct __SecCode { } *codeRef;

+ (unsigned int)minimalValidationFlags;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)teamIdentifier;
- (BOOL)validate;
- (id)signingIdentifier;
- (id)designatedRequirement;
- (id)pathURL;
- (id)getInfoPlist:(id *)a0;
- (BOOL)isAppSandboxed;
- (BOOL)inheritsSandbox;
- (unsigned int)codeSignatureFlags;
- (id)getBundleIdentifier:(id *)a0;
- (id)getEntitlements:(id *)a0;
- (id)getSigningInformation:(unsigned int)a0 error:(id *)a1;
- (BOOL)hasEntitlement:(id)a0 error:(id *)a1;
- (id)initWithSecCodeRef:(struct __SecCode { } *)a0;
- (id)signingInformation:(unsigned int)a0;
- (BOOL)validateWithFlags:(unsigned int)a0;
- (BOOL)validateWithFlags:(unsigned int)a0 additionalRequirement:(id)a1 error:(id *)a2;

@end
