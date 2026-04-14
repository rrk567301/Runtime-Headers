@class NSString;

@interface MAAbsoluteAssetId : NSObject <NSSecureCoding> {
    NSString *_allAttributesHash;
    NSString *_assetIdHash;
    NSString *_nonAssetIdHash;
    NSString *_downloadContentHash;
    NSString *_downloadUrlHash;
    NSString *_downloadPolicyHash;
    NSString *_pallasAssetIdHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) NSString *assetType;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0;
- (id)summary;
- (id)allAttributesHash;
- (id)nonIdHash;
- (id)contentHash;
- (id)urlHash;
- (id)policyHash;
- (id)assetIdHash;
- (id)pallasDynamicAssetIdHash;
- (id)initWithAssetId:(id)a0 forAssetType:(id)a1;
- (id)initWithAssetId:(id)a0 forAssetType:(id)a1 attributes:(id)a2;
- (id)encodeAsPlist;
- (id)diffFrom:(id)a0;
- (id)diffFromAsset:(id)a0;
- (id)diffFromAssetId:(id)a0 assetType:(id)a1 attributes:(id)a2;
- (BOOL)hasOnlyAssetTypeAndId;

@end
