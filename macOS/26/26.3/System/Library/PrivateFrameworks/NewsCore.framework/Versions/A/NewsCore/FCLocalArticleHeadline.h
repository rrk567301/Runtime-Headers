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

- (BOOL)isDraft;
- (id)articleID;
- (id)primaryAudience;
- (unsigned long long)contentType;
- (id)videoURL;
- (id)thumbnail;
- (BOOL)isFeatureCandidate;
- (id)iAdCategories;
- (id)blockedStorefrontIDs;
- (id)publishDate;
- (id)shortExcerpt;
- (BOOL)webEmbedsEnabled;
- (id)identifier;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)allowedStorefrontIDs;
- (id)iAdKeywords;
- (BOOL)isLocalDraft;
- (BOOL)hasThumbnail;
- (id)sourceName;
- (double)videoDuration;
- (BOOL)isSponsored;
- (id)accessoryText;
- (id)topicIDs;
- (id)title;
- (id)sourceChannel;
- (void).cxx_destruct;
- (id)contentURL;
- (BOOL)isDeleted;
- (id)recipeIDs;
- (id)contentWithContext:(id)a0;
- (id)thumbnailAssetHandle;
- (id)lastModifiedDate;
- (id)iAdSectionIDs;
- (id)surfacedByBinID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2 recipeIDs:(id)a3;
- (BOOL)isPremium;
- (id)localDraftPath;

@end
