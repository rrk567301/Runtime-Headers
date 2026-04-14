@class NSDictionary, NSString, FCHeadlineThumbnail;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline {
    BOOL _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) id<FCChannelProviding> channel;

- (void).cxx_destruct;
- (id)identifier;
- (id)title;
- (unsigned long long)contentType;
- (BOOL)hasThumbnail;
- (BOOL)isDraft;
- (id)thumbnail;
- (id)contentURL;
- (BOOL)isDeleted;
- (id)sourceName;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)lastModifiedDate;
- (BOOL)isPremium;
- (id)publishDate;
- (id)videoURL;
- (double)videoDuration;
- (id)articleID;
- (id)topicIDs;
- (id)primaryAudience;
- (id)shortExcerpt;
- (id)accessoryText;
- (BOOL)isFeatureCandidate;
- (BOOL)isSponsored;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)blockedStorefrontIDs;
- (id)allowedStorefrontIDs;
- (id)sourceChannel;
- (id)thumbnailAssetHandle;
- (id)localDraftPath;
- (id)contentWithContext:(id)a0;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2;
- (BOOL)isLocalDraft;
- (id)surfacedByBinID;
- (BOOL)useTransparentNavigationBar;
- (BOOL)webEmbedsEnabled;

@end
