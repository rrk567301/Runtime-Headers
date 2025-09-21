@class NSString;

@interface MAAssetDiff : NSObject <NSSecureCoding> {
    unsigned long long _diffRaw;
    unsigned long long _diff;
    unsigned long long _mask;
    NSString *_description;
    NSString *_assessment;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)allowEverythingDifferent;
+ (id)defaultAllowedDifferences;
+ (id)requireSameAssetTypeAndAllAttributes;
+ (id)requireSameAssetTypeAndAssetId;
+ (id)requireSameAssetTypeAndDownloadContent;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)category;
- (id)initWithPlist:(id)a0;
- (BOOL)isSameAssetType;
- (id)summary;
- (id)encodeAsPlist;
- (BOOL)hasOnlyAllowedDifferences:(id)a0;
- (id)initDifferentAssetType:(char)a0 assetId:(char)a1 attributes:(char)a2 assetIdAttributes:(char)a3 dynamicAssetId:(char)a4 nonIdAttributes:(char)a5 content:(char)a6 url:(char)a7 policy:(char)a8;
- (id)initFromDiff:(unsigned long long)a0;
- (id)initFromInverseOfCategories:(unsigned long long)a0;
- (BOOL)isAnythingDifferent;
- (BOOL)isSameAssetId;
- (BOOL)isSameDownloadContent;
- (BOOL)isSameDownloadPolicy;
- (BOOL)isSameDownloadUrl;
- (BOOL)isSameForAllAttributes;
- (BOOL)isSameForNonAssetIdAttributes;

@end
