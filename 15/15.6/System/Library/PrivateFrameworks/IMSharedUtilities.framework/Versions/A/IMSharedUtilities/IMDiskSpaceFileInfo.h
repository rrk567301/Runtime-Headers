@class NSString;

@interface IMDiskSpaceFileInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) struct IMFileSize { unsigned long long file_size; unsigned long long disk_allocation_size; } fileSize;
@property (readonly, nonatomic) char isAttachment;
@property (readonly, nonatomic) char isSyncAsset;
@property (readonly, nonatomic) char isPurgableOnDisk;
@property (readonly, nonatomic) char isDirectory;
@property (readonly, nonatomic) char isSticker;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *fileExtension;

- (void).cxx_destruct;
- (void)log;
- (id)logString;
- (void)addLogItems:(id)a0;
- (id)initWithPath:(id)a0 fileSize:(struct IMFileSize { unsigned long long x0; unsigned long long x1; })a1 isDirectory:(char)a2 isAttachment:(char)a3 isSyncAsset:(char)a4 isSticker:(char)a5 isPurgableOnDisk:(char)a6;

@end
