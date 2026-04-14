@interface SecureMobileAssetExclave.MobileAssetExclaveServicesManager : NSObject <MAExclaveManifestStorageServiceProtocol2> {
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ tbClient;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)activateCommittedManifestForFSTag:(unsigned int)a0 specifier:(id)a1 error:(id *)a2;
- (BOOL)checkManifestForFSTag:(unsigned int)a0 specifier:(id)a1 state:(unsigned int)a2 manifest:(id)a3 infoPlist:(id)a4 catalog:(id)a5 isValid:(BOOL *)a6 error:(id *)a7;
- (BOOL)commitStagedManifestForFSTags:(id)a0 specifiers:(id)a1 error:(id *)a2;
- (id)initWithConclave:(BOOL)a0;
- (BOOL)invalidateManifestForFSTag:(unsigned int)a0 specifier:(id)a1 error:(id *)a2;
- (id)proposeNonce:(id *)a0;
- (BOOL)stageManifestForFSTag:(unsigned int)a0 specifier:(id)a1 manifest:(id)a2 infoPlist:(id)a3 catalog:(id)a4 error:(id *)a5;

@end
