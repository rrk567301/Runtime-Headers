@class NSData;

@interface TVRMSFairPlayKeyboardEncryption : NSObject {
    NSData *_challenge;
    BOOL _certIsTrusted;
    struct __SecKey { } *_pubKeyRef;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)_convertStringToData:(id)a0;
- (id)_convertDataToString:(id)a0;
- (BOOL)isTrusted;
- (id)encryptString:(id)a0;
- (void)setLeafString:(id)a0;
- (void)setChallengeString:(id)a0;
- (BOOL)_verifyCert:(id)a0;

@end
