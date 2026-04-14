@interface CRSmcController : NSObject

- (int)closeAppleSMC:(unsigned int)a0;
- (BOOL)isSMCKeyAvailable:(unsigned int)a0 keyName:(id)a1;
- (int)openAppleSMC:(int)a0 port:(unsigned int *)a1;
- (int)openAppleSMC:(unsigned int *)a0 withRetry:(unsigned short)a1;
- (int)readSMCKey:(unsigned int)a0 key:(unsigned int)a1 readData:(void *)a2 dataSize:(unsigned long long)a3 oSize:(unsigned int *)a4;
- (int)readSMCKey:(unsigned int)a0 keyName:(id)a1 rval:(id *)a2;
- (int)writeSMCKey:(unsigned int)a0 key:(unsigned int)a1 writeData:(void *)a2 dataSize:(unsigned long long)a3;
- (int)writeSMCKey:(unsigned int)a0 keyName:(id)a1 data:(void *)a2 size:(unsigned long long)a3;

@end
