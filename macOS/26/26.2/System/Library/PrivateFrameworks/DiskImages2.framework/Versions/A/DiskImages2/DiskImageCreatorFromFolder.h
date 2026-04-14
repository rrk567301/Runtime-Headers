@interface DiskImageCreatorFromFolder : BaseDiskImageCreator

+ (BOOL)allowParallelModeWithURL:(id)a0 outMode:(BOOL *)a1 error:(id *)a2;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)createImageWithSrcFolder:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)compactAndEjectWithCreateParams:(id)a0 error:(id *)a1;
- (BOOL)createImageWithSrcFolder:(id)a0 progress:(id)a1 createParams:(id)a2 convertParams:(id *)a3 error:(id *)a4;
- (BOOL)resizeDataPartitionWithError:(id *)a0;
- (void)updateNumBlocksWithCopier:(id)a0;
- (BOOL)updatePartitionMapWithError:(id *)a0;

@end
