@class NSString;

@interface FSStatFSResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long blockSize;
@property unsigned long long ioSize;
@property unsigned long long totalBlocks;
@property unsigned long long availableBlocks;
@property unsigned long long freeBlocks;
@property unsigned long long usedBlocks;
@property unsigned long long totalBytes;
@property unsigned long long availableBytes;
@property unsigned long long freeBytes;
@property unsigned long long usedBytes;
@property unsigned long long totalFiles;
@property unsigned long long freeFiles;
@property unsigned int filesystemSubType;
@property (readonly, copy) NSString *filesystemTypeName;

- (id)description;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFSTypeName:(id)a0;

@end
