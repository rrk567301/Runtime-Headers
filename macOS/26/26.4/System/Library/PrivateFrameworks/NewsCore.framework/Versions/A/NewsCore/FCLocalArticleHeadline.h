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

- (id)sourceName;
- (id)iAdKeywords;
- (BOOL)isDraft;
- (id)contentURL;
- (BOOL)isDeleted;
- (id)primaryAudience;
- (id)publishDate;
- (id)shortExcerpt;
- (id)thumbnail;
- (id)topicIDs;
- (BOOL)isSponsored;
- (unsigned long long)contentType;
- (id)contentWithContext:(id)a0;
- (id)articleID;
- (id)videoURL;
- (id)sourceChannel;
- (id)accessoryText;
- (id)iAdSectionIDs;
- (BOOL)hasThumbnail;
- (BOOL)isLocalDraft;
- (id)iAdCategories;
- (id)lastModifiedDate;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)blockedStorefrontIDs;
- (id)title;
- (BOOL)webEmbedsEnabled;
- (void).cxx_destruct;
- (double)videoDuration;
- (id)thumbnailAssetHandle;
- (id)allowedStorefrontIDs;
- (BOOL)isFeatureCandidate;
- (id)identifier;
- (id)recipeIDs;
- (id)surfacedByBinID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2 recipeIDs:(id)a3;
- (BOOL)isPremium;
- (id)localDraftPath;

@end
