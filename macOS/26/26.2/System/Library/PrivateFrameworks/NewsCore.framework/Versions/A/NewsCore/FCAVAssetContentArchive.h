@class NTPBAVAsset;

@interface FCAVAssetContentArchive : FCContentArchive {
    NTPBAVAsset *_avAsset;
}

+ (BOOL)supportsSecureCoding;

- (long long)storageSize;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)manifest;

@end
