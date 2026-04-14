@interface FCCKAESSIVRecordNameCipher : NSObject <FCCKRecordNameCipher>

- (id)decryptRecordName:(id)a0 withKey:(id)a1;
- (id)_encryptionSalt;
- (id)_derivedKeyFromKey:(id)a0;
- (id)encryptRecordName:(id)a0 withKey:(id)a1;

@end
