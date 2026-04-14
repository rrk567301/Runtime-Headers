@class FCHeadlineThumbnail, NSString, NSDictionary, NSArray;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline {
    BOOL _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
    NSArray *_recipeIDs;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) id<FCChannelProviding> channel;
@property (readonly, nonatomic) NSArray *recipes;

- (id)shortExcerpt;
- (id)sourceChannel;
- (id)contentURL;
- (BOOL)isDraft;
- (id)topicIDs;
- (id)contentWithContext:(id)a0;
- (BOOL)isFeatureCandidate;
- (id)videoURL;
- (unsigned long long)contentType;
- (double)videoDuration;
- (BOOL)isDeleted;
- (id)iAdKeywords;
- (id)lastModifiedDate;
- (id)publishDate;
- (id)blockedStorefrontIDs;
- (BOOL)hasThumbnail;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)iAdCategories;
- (id)articleID;
- (id)thumbnail;
- (id)allowedStorefrontIDs;
- (id)primaryAudience;
- (BOOL)isLocalDraft;
- (id)identifier;
- (id)thumbnailAssetHandle;
- (id)recipeIDs;
- (BOOL)isSponsored;
- (id)title;
- (void).cxx_destruct;
- (BOOL)webEmbedsEnabled;
- (id)sourceName;
- (id)accessoryText;
- (id)iAdSectionIDs;
- (id)surfacedByBinID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2 recipeIDs:(id)a3;
- (BOOL)isPremium;
- (id)localDraftPath;

@end
