@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromPropertyList:(void *)a0;
+ (id)newBufferFromCFData:(struct __CFData { } *)a0;
+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;

- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (void *)bytes;
- (BOOL)validatePlist;
- (id)copyXPCData;
- (BOOL)beginAccessing;
- (BOOL)purgable;
- (unsigned long long)length;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (void)endAccessing;
- (struct __CFData { } *)copyCFData;

@end
