@class NSString;

@interface FSStatFSResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long blockSize;
@property long long ioSize;
@property long long totalBlocks;
@property long long availableBlocks;
@property long long freeBlocks;
@property long long usedBlocks;
@property long long totalBytes;
@property long long availableBytes;
@property long long freeBytes;
@property long long usedBytes;
@property long long totalFiles;
@property long long freeFiles;
@property long long fileSystemSubType;
@property (readonly, copy) NSString *fileSystemTypeName;

- (id)description;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFSTypeName:(id)a0;

@end
