@class NSString;

@interface SFCertAuthorityInvitation : NSObject {
    char _wasSigned;
    NSString *_caName;
    id _authenticator;
}

+ (id)_caConfigFileExtension;
+ (char)mailItWithScript:(id)a0 caName:(id)a1 attachmentPath:(id)a2 greeting:(id)a3 subject:(id)a4;

- (void)dealloc;
- (char)_updateCAConfigFileSerialNumber;
- (id)_caConfigFileFullPathName;
- (id)_configFileCommonNameAndSerialNumber:(id *)a0;
- (char)_createCAConfigFile:(id *)a0 pemData:(id)a1 identityNameInfo:(id)a2 subjAltNameExtObj:(id)a3 keyUsageExtObj:(id)a4 keyPairAttrsObj:(id)a5 certInfoObj:(id)a6 basicConstrExtObj:(id)a7 extKeyUsageExtObj:(id)a8 additionalCertInfoObj:(id)a9 CACert:(struct __SecCertificate { } *)a10 webURL:(id)a11 returnedInvite:(id *)a12;
- (char)_doesCAConfigFileExistWithFileName:(id)a0;
- (id)_invitation;
- (char)_isValidCAConfigFileExtension:(id)a0;
- (void)_modifyInvitationWithObject:(id)a0 forKey:(id)a1;
- (void)_modifyWebSiteURL:(id)a0;
- (int)_readCAConfigFileFullPath:(id)a0 trustRefOnErr:(struct __SecTrust **)a1 identityNameInfo:(id)a2 subjAltNameExtObj:(id)a3 keyUsageExtObj:(id)a4 keyPairAttrsObj:(id)a5 certInfoObj:(id)a6 basicConstrExtObj:(id)a7 extKeyUsageExtObj:(id)a8 additionalCertInfoObj:(id)a9 caWebSite:(id *)a10 caPemData:(id *)a11 caPubKeyHash:(id *)a12;
- (void)_setAuthenticator:(id)a0;
- (void)_setName:(id)a0;
- (void)_updateAndWriteDictionaryAsNonSigned:(id)a0 newDictionary:(id *)a1;
- (char)_updateCAConfigFileSerialNumberToInt:(int)a0;
- (char)_wasSigned;
- (char)certificatesFromInvite:(id)a0 sharedSecret:(id)a1 certs:(id *)a2;
- (char)certificatesFromPemData:(id)a0 certs:(id *)a1;

@end
