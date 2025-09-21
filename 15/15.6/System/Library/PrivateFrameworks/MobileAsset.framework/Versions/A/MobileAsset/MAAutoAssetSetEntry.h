@class MAAutoAssetSelector;

@interface MAAutoAssetSetEntry : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (nonatomic) char assetLockedInhibitsRemoval;

- (id)copy;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 assetLockedInhibitsRemoval:(char)a2;
- (id)summary;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3 assetLockedInhibitsRemoval:(char)a4;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2 assetLockedInhibitsRemoval:(char)a3;

@end
