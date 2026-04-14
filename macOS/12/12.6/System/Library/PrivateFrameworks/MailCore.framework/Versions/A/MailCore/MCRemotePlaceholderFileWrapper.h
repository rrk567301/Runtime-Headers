@class NSURL;

@interface MCRemotePlaceholderFileWrapper : MCPlaceholderFileWrapper

@property (readonly, nonatomic) NSURL *URL;

- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initRegularFileWithContents:(id)a0;
- (id)symbolicLinkDestinationURL;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initSymbolicLinkWithDestinationURL:(id)a0;
- (BOOL)isRemotelyAccessed;
- (unsigned long long)approximateSizeAllowingDiskIO:(BOOL)a0;

@end
