@interface DICreateASIFParams : DICreateParams

@property (nonatomic) unsigned int blockSize;

- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (void)createDiskImageParamsXPC;
- (BOOL)validateBlockSizeSupport;

@end
