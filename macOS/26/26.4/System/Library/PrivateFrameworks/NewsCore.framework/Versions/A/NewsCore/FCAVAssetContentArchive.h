@class NTPBAVAsset;

@interface FCAVAssetContentArchive : FCContentArchive {
    NTPBAVAsset *_avAsset;
}

+ (BOOL)supportsSecureCoding;

- (long long)storageSize;
- (id)manifest;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
