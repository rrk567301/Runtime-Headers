@class NSURL;

@interface ICNFMCRemotePlaceholderFileWrapper : ICNFMCPlaceholderFileWrapper

@property (readonly, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (id)initSymbolicLinkWithDestinationURL:(id)a0;
- (id)symbolicLinkDestinationURL;
- (unsigned long long)approximateSize;
- (BOOL)isRemotelyAccessed;
- (id)remoteAccessMimeType;

@end
