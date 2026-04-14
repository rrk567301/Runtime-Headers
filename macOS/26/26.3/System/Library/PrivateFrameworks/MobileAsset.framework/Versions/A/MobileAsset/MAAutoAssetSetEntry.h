@class MAAutoAssetSelector;

@interface MAAutoAssetSetEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (nonatomic) BOOL assetLockedInhibitsRemoval;

- (id)copy;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2;
- (id)description;
- (id)summary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 assetLockedInhibitsRemoval:(BOOL)a2;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3 assetLockedInhibitsRemoval:(BOOL)a4;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2 assetLockedInhibitsRemoval:(BOOL)a3;

@end
