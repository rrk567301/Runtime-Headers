@class NSArray, NSURL;

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {
    unsigned long long _formatVersion;
}

@property (readonly, nonatomic) NSArray *mlModels;
@property (readonly, nonatomic) NSURL *mobileAssetBaseURL;

- (unsigned long long)minSupportedFormatVersion;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)formatVersion;
- (id)modelURLs;
- (void)setModelURLs:(id)a0;
- (id)mobileAssetType;
- (void)_downloadAssetsIfNecessary;
- (id)contentVersionKey;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)mlModelClasses;
- (id)modelResourceNames;

@end
