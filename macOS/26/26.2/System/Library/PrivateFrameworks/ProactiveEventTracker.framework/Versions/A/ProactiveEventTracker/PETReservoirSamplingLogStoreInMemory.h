@class NSString, NSMutableData;

@interface PETReservoirSamplingLogStoreInMemory : NSObject <PETReservoirSamplingLogStore> {
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlock;
- (BOOL)attemptToRecreate;
- (void).cxx_destruct;
- (unsigned long long)currentLength;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct chunk_s { unsigned int x0; unsigned int x1; } x4[0]; } *)remap:(unsigned long long *)a0;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct chunk_s { unsigned int x0; unsigned int x1; } x4[0]; } *)headerMap:(unsigned long long *)a0;
- (BOOL)lock;
- (BOOL)appendData:(id)a0 andReturnMapPointer:(struct **)a1;
- (id)init;
- (BOOL)changeLength:(unsigned long long)a0;

@end
