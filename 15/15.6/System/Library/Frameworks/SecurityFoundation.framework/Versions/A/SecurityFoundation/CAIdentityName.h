@class NSString;

@interface CAIdentityName : NSObject {
    NSString *_caIdentityName;
    int _caLetUserOverrideDefaults;
    int _caMakeCAConfigFileTheDefaultCA;
    int _caSelfSignedChosen;
    char _caDidWarnAboutSelfSignedCert;
    NSString *_caAdminCAEmailAddress;
    int _certType;
}

- (void)dealloc;
- (void)_setDidWarnAboutSelfSignedCert:(char)a0;
- (id)_CAAdminEmailAddress;
- (int)_certType;
- (char)_didWarnAboutSelfSignedCert;
- (id)_identityName;
- (char)_isCATypeSelfSignedRoot;
- (char)_isCertTypeCodeSigning;
- (char)_isCertTypeSMIME;
- (char)_isCertTypeSSLServer;
- (char)_isCertTypeVPNClient;
- (char)_isCertTypeVPNServer;
- (int)_letUserOverrideDefaults;
- (int)_makeDefaultCA;
- (void)_setCAAdminEmailAddress:(id)a0;
- (void)_setCAType:(int)a0;
- (void)_setCertType:(int)a0;
- (void)_setIdentityName:(id)a0;
- (void)_setLetOverrideDefaults:(int)a0;
- (void)_setToDefaults;

@end
