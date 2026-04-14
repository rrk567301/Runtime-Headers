@class NSURL, NSFileHandle;

@interface DIFileUploadAsset : DIUploadAsset <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSFileHandle *fileHandle;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0 assetType:(long long)a1;

@end
