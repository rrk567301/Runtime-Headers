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

- (id)publishDate;
- (id)topicIDs;
- (unsigned long long)contentType;
- (BOOL)isLocalDraft;
- (id)iAdKeywords;
- (BOOL)isDraft;
- (id)shortExcerpt;
- (id)sourceChannel;
- (id)videoURL;
- (id)thumbnail;
- (id)articleID;
- (id)allowedStorefrontIDs;
- (id)contentURL;
- (id)iAdCategories;
- (BOOL)hasThumbnail;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)primaryAudience;
- (id)blockedStorefrontIDs;
- (id)identifier;
- (BOOL)isSponsored;
- (BOOL)isFeatureCandidate;
- (id)sourceName;
- (BOOL)isDeleted;
- (id)recipeIDs;
- (id)thumbnailAssetHandle;
- (id)contentWithContext:(id)a0;
- (id)iAdSectionIDs;
- (id)lastModifiedDate;
- (id)title;
- (id)accessoryText;
- (double)videoDuration;
- (void).cxx_destruct;
- (BOOL)webEmbedsEnabled;
- (id)surfacedByBinID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2 recipeIDs:(id)a3;
- (BOOL)isPremium;
- (id)localDraftPath;

@end
