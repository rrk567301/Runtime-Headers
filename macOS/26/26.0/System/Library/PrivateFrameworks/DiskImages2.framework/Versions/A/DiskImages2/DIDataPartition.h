@class NSString, DIIOMedia;

@interface DIDataPartition : NSObject

@property (readonly, nonatomic) unsigned long long GPTTypeID;
@property (readonly, copy, nonatomic) NSString *mediaContentUUID;
@property (retain, nonatomic) DIIOMedia *ioMedia;
@property (nonatomic) unsigned long long numBlocks;
@property (nonatomic) unsigned long long blockSize;
@property (copy, nonatomic) NSString *volumeBSDName;
@property (copy, nonatomic) NSString *ioMediaUUID;

+ (id)findPartitionSchemeWithIOMedia:(id)a0 error:(id *)a1;
+ (id)newMountURLWithError:(id *)a0;

- (void).cxx_destruct;
- (BOOL)findPartitionWithDeviceBSDName:(id)a0 error:(id *)a1;
- (BOOL)findVolumeBSDNameWithError:(id *)a0;
- (BOOL)formatWithVolumeName:(id)a0 error:(id *)a1;
- (unsigned long long)getFileSystemMinimalBlocks:(id *)a0;
- (id)newMountVolumeWithDiskArb:(id)a0 error:(id *)a1;
- (BOOL)resizeFileSystemToMinimumWithError:(id *)a0;
- (BOOL)resizeFileSystemWithNumBlocks:(unsigned long long)a0 error:(id *)a1;

@end
