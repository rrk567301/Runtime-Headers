@class NSArray, NSString, PXContentSyndicationConfigurationProvider, PHPhotoLibrary;

@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>

@property (readonly, nonatomic) long long ruleCount;
@property (readonly, nonatomic) char hasRules;
@property (readonly, nonatomic) PXContentSyndicationConfigurationProvider *contentSyndicationConfigurationProvider;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) char includeSharedWithYou;
@property (nonatomic) char showOnlySharedWithYou;
@property (nonatomic) char saved;
@property (nonatomic) char unsaved;
@property (nonatomic) char favorite;
@property (nonatomic) char edited;
@property (nonatomic) char image;
@property (nonatomic) char video;
@property (nonatomic) char live;
@property (nonatomic) char portrait;
@property (nonatomic) char inUserAlbum;
@property (nonatomic) char notInUserAlbum;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *uuids;
@property (nonatomic) char showOnlySentICloudLinks;
@property (nonatomic) char showOnlyReceivedICloudLinks;
@property (nonatomic) char includeScreenshots;
@property (nonatomic) char showOnlyScreenshots;
@property (readonly, nonatomic) char shouldExcludeScreenshots;
@property (nonatomic) char includeFromMyMac;
@property (nonatomic) char showOnlyFromMyMac;
@property (readonly, nonatomic) char shouldExcludeFromMyMac;
@property (nonatomic) char includeOthersInSocialGroupAssets;
@property (readonly, nonatomic) long long activeFilterCount;
@property (nonatomic) char isSearchResultsFilterButton;
@property (readonly, nonatomic) char isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;

+ (id)defaultAllPhotosFilterStateForPhotoLibrary:(id)a0;
+ (id)defaultFilterStateForContainerCollection:(id)a0 photoLibrary:(id)a1;
+ (id)defaultFilterStateForPhotoLibrary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_checkDataSourceType:(id /* block */)a0;
- (char)isContentFilterActive:(long long)a0;
- (id)predicateForUseCase:(unsigned long long)a0;

@end
