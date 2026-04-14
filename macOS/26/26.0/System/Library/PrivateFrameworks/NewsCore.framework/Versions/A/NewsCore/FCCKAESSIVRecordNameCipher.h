@interface FCCKAESSIVRecordNameCipher : NSObject <FCCKRecordNameCipher>

- (id)_encryptionSalt;
- (id)decryptRecordName:(id)a0 withKey:(id)a1;
- (id)encryptRecordName:(id)a0 withKey:(id)a1;
- (id)_derivedKeyFromKey:(id)a0;

@end
