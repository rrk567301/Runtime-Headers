@interface SESShortLivedKeyService : NSObject

+ (id)shared;

- (id)_createKey:(struct __SecAccessControl { } *)a0 keyType:(id)a1 shortLivedKeyType:(id)a2 shortLivedKeyTimerValue:(id)a3 error:(id *)a4;
- (id)_sign:(id)a0 data:(id)a1 algorithm:(id)a2 subjectIdentifier:(id)a3 nonce:(id)a4 OIDs:(id)a5 laExternalizedContext:(id)a6 outError:(id *)a7;
- (id)assembleTimerValue:(unsigned short)a0 seconds:(unsigned short)a1 miliseconds:(unsigned short)a2;
- (id)createKeyWithValidityTime:(id)a0 error:(id *)a1;
- (id)signWithKey:(id)a0 serverNonce:(id)a1 dsid:(id)a2 error:(id *)a3;

@end
