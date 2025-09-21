@interface DICreateUDSBParams : DICreateParams

@property (nonatomic) unsigned long long sparseBundleBandSize;

+ (char)checkExistingFileWithURL:(id)a0 isDirectory:(char)a1 error:(id *)a2;

- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (void)createDiskImageParamsXPC;

@end
