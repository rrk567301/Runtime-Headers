@interface MKDIDevice : NSObject

@property (readonly, nonatomic) struct __MKMedia { } *mediaRef;
@property (readonly, nonatomic) int blockSize;

- (void)dealloc;
- (id)initWithBSDName:(id)a0 numBlocks:(unsigned long long)a1 blockSize:(int)a2 error:(id *)a3;
- (BOOL)partitionDiskWithGPTTypeID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)resizeDataPartitionWithPartitionUUID:(id)a0 partitionNumBlocks:(unsigned long long)a1 error:(id *)a2;
- (BOOL)updatePartitionMapWithError:(id *)a0;

@end
