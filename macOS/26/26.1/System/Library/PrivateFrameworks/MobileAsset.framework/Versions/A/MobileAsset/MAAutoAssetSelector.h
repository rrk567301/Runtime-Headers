@class NSString, NSData;

@interface MAAutoAssetSelector : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSString *setAtomicInstanceUUID;
@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSString *assetSpecifier;
@property (readonly, retain, nonatomic) NSData *downloadDecryptionKey;

- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2;
- (id)copy;
- (id)_initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3 setAtomicInstanceUUID:(id)a4;
- (id)summary;
- (id)newSummaryDictionary;
- (id)initForAssetType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)assignAssetVersion:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2;
- (id)copyClearingWriteOnlyFields;
- (id)initWithCoder:(id)a0;
- (id)persistedEntryID;
- (void).cxx_destruct;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initForSetAtomicInstanceUUID:(id)a0;
- (id)shortName;

@end
