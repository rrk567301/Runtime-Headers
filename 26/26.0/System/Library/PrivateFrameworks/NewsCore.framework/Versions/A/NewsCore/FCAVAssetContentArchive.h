@class NTPBAVAsset;

@interface FCAVAssetContentArchive : FCContentArchive {
    NTPBAVAsset *_avAsset;
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
