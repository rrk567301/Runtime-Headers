@class NSURL, NSString, NTPBAsset;

@interface FCAssetContentArchive : FCContentArchive {
    NTPBAsset *_asset;
    NSURL *_remoteURL;
    NSString *_filePath;
}

+ (BOOL)supportsSecureCoding;

- (long long)storageSize;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)unarchiveIntoContentContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)manifest;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
