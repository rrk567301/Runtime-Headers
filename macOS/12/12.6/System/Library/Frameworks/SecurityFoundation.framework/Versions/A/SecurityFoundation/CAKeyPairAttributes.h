@interface CAKeyPairAttributes : NSObject {
    int _caKeySize;
    int _caKeyAlgorithm;
    int _caUserKeySize;
    int _caUserKeyAlgorithm;
    int _caCertAuthorityKeySize;
    int _caCertAuthorityKeyAlgorithm;
    BOOL _caDoneCAKeyPair;
    struct __SecAccess { } *_caSecAccessRef;
}

- (void)dealloc;
- (void)_setToDefaults;
- (struct __SecAccess { } *)_accessRef;
- (void)_setAccessRef:(struct __SecAccess { } *)a0;
- (int)_keySize;
- (void)_setKeySize:(id)a0;
- (void)_setCertAuthorityKeySize:(int)a0;
- (int)_certAuthorityKeySize;
- (int)_keyAlgorithm;
- (void)_setKeyAlgorithm:(id)a0;
- (int)_userKeyAlgorithm;
- (int)_userKeySize;
- (void)_setCertAuthorityKeyAlgorithm:(int)a0;
- (int)_certAuthoritykeyAlgorithm;
- (void)_setDoneCAKeyPair:(BOOL)a0;
- (BOOL)_doneCAKeyPair;
- (void)_saveCAKeyPairPanelValues;
- (void)_updateKeyPairPanelToCAValues;
- (void)_saveUserKeyPairPanelValues;
- (void)_updateKeyPairPanelToUserValues;

@end
