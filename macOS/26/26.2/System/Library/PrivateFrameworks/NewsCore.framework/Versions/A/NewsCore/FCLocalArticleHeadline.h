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

- (id)sourceChannel;
- (id)topicIDs;
- (id)contentURL;
- (id)publishDate;
- (id)identifier;
- (id)thumbnailAssetHandle;
- (id)iAdKeywords;
- (id)thumbnail;
- (id)lastModifiedDate;
- (id)sourceName;
- (id)videoURL;
- (unsigned long long)contentType;
- (id)title;
- (id)shortExcerpt;
- (id)accessoryText;
- (id)articleID;
- (id)iAdSectionIDs;
- (id)iAdCategories;
- (id)primaryAudience;
- (double)videoDuration;
- (id)blockedStorefrontIDs;
- (BOOL)hasThumbnail;
- (id)allowedStorefrontIDs;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)recipeIDs;
- (void).cxx_destruct;
- (BOOL)isFeatureCandidate;
- (BOOL)isDraft;
- (BOOL)isDeleted;
- (BOOL)isLocalDraft;
- (BOOL)webEmbedsEnabled;
- (BOOL)isSponsored;
- (id)contentWithContext:(id)a0;
- (id)surfacedByBinID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2 recipeIDs:(id)a3;
- (BOOL)isPremium;
- (id)localDraftPath;

@end
