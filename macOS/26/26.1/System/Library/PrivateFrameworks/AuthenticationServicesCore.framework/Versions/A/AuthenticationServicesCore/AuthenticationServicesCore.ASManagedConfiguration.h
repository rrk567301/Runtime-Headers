@interface AuthenticationServicesCore.ASManagedConfiguration : NSObject {
    void /* unknown type, empty encoding */ plistURL;
    void /* unknown type, empty encoding */ declarationKeyToPasskeyAttestationConfigurationKey;
}

+ (id)loadFromDiskWithPlistURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)init;
- (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)a0;
- (BOOL)isConfiguredForEnterpriseAttestationForRelyingParty:(id)a0;

@end
