@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromPropertyList:(void *)a0;
+ (id)newBufferFromCFData:(struct __CFData { } *)a0;
+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;

- (struct __CFData { } *)copyCFData;
- (void *)bytes;
- (BOOL)purgable;
- (BOOL)beginAccessing;
- (unsigned long long)length;
- (id)copyXPCData;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (void)endAccessing;
- (BOOL)validatePlist;

@end
