@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;
+ (id)newBufferFromPropertyList:(void *)a0;
+ (id)newBufferFromCFData:(struct __CFData { } *)a0;

- (void *)bytes;
- (unsigned long long)length;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (void)endAccessing;
- (BOOL)validatePlist;
- (id)copyXPCData;
- (struct __CFData { } *)copyCFData;
- (BOOL)purgable;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (BOOL)beginAccessing;

@end
