@interface BlankDiskImageCreator : BaseDiskImageCreator

@property (nonatomic) unsigned long long fileSystem;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)createImageWithNumBlocks:(unsigned long long)a0 error:(id *)a1;

@end
