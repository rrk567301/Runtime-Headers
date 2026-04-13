@class NSArray, NSURL;

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {
    unsigned long long _formatVersion;
}

@property (readonly, nonatomic) NSArray *mlModels;
@property (readonly, nonatomic) NSURL *mobileAssetBaseURL;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)formatVersion;
- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (id)mobileAssetType;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)_downloadAssetsIfNecessary;
- (id)modelURLs;
- (id)contentVersionKey;
- (id)modelResourceNames;
- (void)setModelURLs:(id)a0;
- (id)mlModelClasses;

@end
