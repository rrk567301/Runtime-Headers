@class NSString;

@interface CAIdentityName : NSObject {
    NSString *_caIdentityName;
    int _caLetUserOverrideDefaults;
    int _caMakeCAConfigFileTheDefaultCA;
    int _caSelfSignedChosen;
    BOOL _caDidWarnAboutSelfSignedCert;
    NSString *_caAdminCAEmailAddress;
    int _certType;
}

- (void)dealloc;
- (void)_setToDefaults;
- (int)_makeDefaultCA;
- (id)_identityName;
- (void)_setIdentityName:(id)a0;
- (id)_CAAdminEmailAddress;
- (void)_setCAAdminEmailAddress:(id)a0;
- (void)_setCAType:(int)a0;
- (BOOL)_isCATypeSelfSignedRoot;
- (BOOL)_didWarnAboutSelfSignedCert;
- (void)_setDidWarnAboutSelfSignedCert:(BOOL)a0;
- (void)_setLetOverrideDefaults:(int)a0;
- (int)_letUserOverrideDefaults;
- (void)_setCertType:(int)a0;
- (int)_certType;
- (BOOL)_isCertTypeSMIME;
- (BOOL)_isCertTypeSSLServer;
- (BOOL)_isCertTypeVPNServer;
- (BOOL)_isCertTypeVPNClient;
- (BOOL)_isCertTypeCodeSigning;

@end
