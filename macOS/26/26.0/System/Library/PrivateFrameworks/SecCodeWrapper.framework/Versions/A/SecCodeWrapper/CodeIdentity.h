@class NSNumber, NSDictionary;

@interface CodeIdentity : NSObject {
    BOOL _haveCheckedValidity;
    NSNumber *_sdkVersion;
    NSDictionary *_cachedInfoPlist;
    NSDictionary *_cachedEntitlements;
}

@property (readonly) struct __SecCode { } *codeRef;
@property (readonly) BOOL isAdHocSigned;

+ (unsigned int)minimalValidationFlags;

- (BOOL)validate;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)teamIdentifier;
- (id)signingIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)sdkVersion;
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
