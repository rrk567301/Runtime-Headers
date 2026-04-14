@class NTPBAVAssetKey;

@interface FCAVAssetKeyContentArchive : FCContentArchive {
    NTPBAVAssetKey *_avAssetKey;
}

+ (BOOL)supportsSecureCoding;

- (id)manifest;
- (long long)storageSize;
- (id)unarchiveIntoContentContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
