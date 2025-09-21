@class NTPBAVAsset;

@interface FCAVAssetContentArchive : FCContentArchive {
    NTPBAVAsset *_avAsset;
}

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)manifest;
- (long long)storageSize;
- (id)unarchiveIntoContentContext:(id)a0;

@end
