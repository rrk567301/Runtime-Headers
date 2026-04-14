@class NSString;

@interface LACCryptoHelper : NSObject <LACCryptoHelping>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_aesGCMKeyHasValidSize:(id)a0;
- (id)_deriveKeyWithPassword:(id)a0 salt:(id)a1 iterations:(unsigned int)a2 size:(unsigned long long)a3 prf:(unsigned int)a4 error:(id *)a5;
- (id)aesGCMDecryptData:(id)a0 key:(id)a1 error:(id *)a2;
- (id)aesGCMEncryptData:(id)a0 key:(id)a1 error:(id *)a2;
- (id)aesGCMKeyWithPassword:(id)a0 salt:(id)a1 iterations:(unsigned int)a2 error:(id *)a3;
- (id)deriveKeyWithPassword:(id)a0 salt:(id)a1 iterations:(unsigned int)a2 size:(unsigned long long)a3 prf:(long long)a4 error:(id *)a5;
- (id)randomDataWithSize:(unsigned long long)a0 error:(id *)a1;

@end
