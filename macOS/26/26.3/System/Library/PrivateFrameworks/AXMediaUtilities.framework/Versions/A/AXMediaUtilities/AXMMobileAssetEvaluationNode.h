@class NSArray, NSURL;

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {
    unsigned long long _formatVersion;
}

@property (readonly, nonatomic) NSArray *mlModels;
@property (readonly, nonatomic) NSURL *mobileAssetBaseURL;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)formatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (unsigned long long)maxSupportedFormatVersion;
- (void).cxx_destruct;
- (id)modelURLs;
- (void)setModelURLs:(id)a0;
- (id)mobileAssetType;
- (void)_downloadAssetsIfNecessary;
- (id)contentVersionKey;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)mlModelClasses;
- (id)modelResourceNames;

@end
