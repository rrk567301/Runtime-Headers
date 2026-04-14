@class NSString, NSData;

@interface MAAutoAssetSelector : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSString *setAtomicInstanceUUID;
@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSString *assetSpecifier;
@property (readonly, retain, nonatomic) NSData *downloadDecryptionKey;

- (id)newSummaryDictionary;
- (id)copy;
- (id)shortName;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)persistedEntryID;
- (void)assignAssetVersion:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2;
- (id)initForAssetType:(id)a0;
- (id)description;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3;
- (id)summary;
- (id)initForSetAtomicInstanceUUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyClearingWriteOnlyFields;
- (id)_initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3 setAtomicInstanceUUID:(id)a4;

@end
