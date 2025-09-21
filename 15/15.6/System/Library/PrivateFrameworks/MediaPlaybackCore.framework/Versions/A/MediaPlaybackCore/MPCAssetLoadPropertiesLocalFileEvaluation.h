@class NSString, MPModelFileAsset;

@interface MPCAssetLoadPropertiesLocalFileEvaluation : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long recommendation;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) char fileMatchesRequiredFileFormat;
@property (nonatomic) char fileMatchesRequiredQuality;
@property (nonatomic) char fileIsDownloaded;
@property (nonatomic) char fileIsCached;
@property (nonatomic) char fileIsHLS;
@property (nonatomic) long long HLSContentPolicy;
@property (nonatomic) long long fileAssetType;
@property (nonatomic) long long expectedAssetType;
@property (nonatomic) long long fileQualityType;
@property (nonatomic) long long expectedQualityType;
@property (readonly, copy, nonatomic) MPModelFileAsset *fileAsset;
@property (readonly, nonatomic) char fileIsValid;
@property (readonly, nonatomic) char fileShouldBeUpdated;

- (id)description;
- (void).cxx_destruct;
- (id)humanDescription;
- (id)initWithFileAsset:(id)a0;

@end
