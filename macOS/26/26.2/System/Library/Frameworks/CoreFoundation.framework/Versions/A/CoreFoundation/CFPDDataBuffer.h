@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;
+ (id)newBufferFromCFData:(struct __CFData { } *)a0;
+ (id)newBufferFromPropertyList:(void *)a0;

- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (void *)bytes;
- (unsigned long long)length;
- (BOOL)beginAccessing;
- (struct __CFData { } *)copyCFData;
- (void)endAccessing;
- (id)copyXPCData;
- (BOOL)validatePlist;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (BOOL)purgable;

@end
