@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromPropertyList:(void *)a0;
+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;
+ (id)newBufferFromCFData:(struct __CFData { } *)a0;

- (void)endAccessing;
- (id)copyXPCData;
- (void *)bytes;
- (BOOL)beginAccessing;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (BOOL)purgable;
- (unsigned long long)length;
- (BOOL)validatePlist;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (struct __CFData { } *)copyCFData;

@end
