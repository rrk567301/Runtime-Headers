@class NSNumber, NSDictionary;

@interface CodeIdentity : NSObject {
    char _haveCheckedValidity;
    NSNumber *_sdkVersion;
    NSDictionary *_cachedInfoPlist;
    NSDictionary *_cachedEntitlements;
}

@property (readonly) struct __SecCode { } *codeRef;
@property (readonly) char isAdHocSigned;

+ (unsigned int)minimalValidationFlags;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)sdkVersion;
- (id)teamIdentifier;
- (char)validate;
- (id)designatedRequirement;
- (id)signingIdentifier;
- (id)pathURL;
- (id)getInfoPlist:(id *)a0;
- (char)isAppSandboxed;
- (char)inheritsSandbox;
- (unsigned int)codeSignatureFlags;
- (id)getBundleIdentifier:(id *)a0;
- (id)getEntitlements:(id *)a0;
- (id)getSigningInformation:(unsigned int)a0 error:(id *)a1;
- (char)hasEntitlement:(id)a0 error:(id *)a1;
- (id)initWithSecCodeRef:(struct __SecCode { } *)a0;
- (id)signingInformation:(unsigned int)a0;
- (char)validateWithFlags:(unsigned int)a0;
- (char)validateWithFlags:(unsigned int)a0 additionalRequirement:(id)a1 error:(id *)a2;

@end
