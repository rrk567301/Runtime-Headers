@class FCHeadlineThumbnail, NSString, NSDictionary, NSArray;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline {
    char _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
    NSArray *_recipeIDs;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) id<FCChannelProviding> channel;
@property (readonly, nonatomic) NSArray *recipes;

- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)contentType;
- (char)hasThumbnail;
- (id)title;
- (char)isDraft;
- (id)thumbnail;
- (id)contentURL;
- (char)isDeleted;
- (id)sourceName;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)lastModifiedDate;
- (id)videoURL;
- (id)publishDate;
- (double)videoDuration;
- (id)articleID;
- (id)primaryAudience;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (char)isFeatureCandidate;
- (char)isSponsored;
- (id)recipeIDs;
- (id)shortExcerpt;
- (id)topicIDs;
- (id)surfacedByBinID;
- (id)contentWithContext:(id)a0;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2 recipeIDs:(id)a3;
- (char)isLocalDraft;
- (char)isPremium;
- (id)localDraftPath;
- (id)sourceChannel;
- (id)thumbnailAssetHandle;
- (char)useTransparentNavigationBar;
- (char)webEmbedsEnabled;

@end
