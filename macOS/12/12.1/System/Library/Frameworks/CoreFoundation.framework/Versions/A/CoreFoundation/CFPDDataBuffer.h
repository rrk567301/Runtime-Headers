@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromCFData:(struct __CFData { } *)a0;
+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;
+ (id)newBufferFromPropertyList:(void *)a0;

- (unsigned long long)length;
- (void *)bytes;
- (struct __CFData { } *)copyCFData;
- (id)copyXPCData;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (BOOL)validatePlist;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (BOOL)beginAccessing;
- (void)endAccessing;
- (BOOL)purgable;

@end
