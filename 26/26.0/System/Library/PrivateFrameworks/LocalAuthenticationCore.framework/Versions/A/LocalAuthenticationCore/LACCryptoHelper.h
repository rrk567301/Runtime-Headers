@class NSString;

@interface LACCryptoHelper : NSObject <LACCryptoHelping>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_aesGCMKeyHasValidSize:(id)a0;
- (id)aesGCMDecryptData:(id)a0 key:(id)a1 error:(id *)a2;
- (id)aesGCMEncryptData:(id)a0 key:(id)a1 error:(id *)a2;
- (id)aesGCMKeyWithPassword:(id)a0 salt:(id)a1 iterations:(unsigned int)a2 error:(id *)a3;
- (id)randomDataWithSize:(unsigned long long)a0 error:(id *)a1;

@end
