@class NSString, NSMutableArray;

@interface NTPBHeadlineAdElement : PBCodable <NSCopying> {
    struct { unsigned char channelContentProviderID : 1; unsigned char draftArticle : 1; unsigned char paidArticle : 1; unsigned char sponsoredArticle : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasArticleRating;
@property (retain, nonatomic) NSString *articleRating;
@property (retain, nonatomic) NSMutableArray *articleIAdCategories;
@property (nonatomic) BOOL hasPaidArticle;
@property (nonatomic) BOOL paidArticle;
@property (nonatomic) BOOL hasSponsoredArticle;
@property (nonatomic) BOOL sponsoredArticle;
@property (nonatomic) BOOL hasDraftArticle;
@property (nonatomic) BOOL draftArticle;
@property (retain, nonatomic) NSMutableArray *articleIAdSectionIDs;
@property (retain, nonatomic) NSMutableArray *channelIAdKeywords;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL hasChannelRating;
@property (retain, nonatomic) NSString *channelRating;
@property (retain, nonatomic) NSMutableArray *channelIAdCategories;
@property (nonatomic) BOOL hasChannelContentProviderID;
@property (nonatomic) long long channelContentProviderID;
@property (retain, nonatomic) NSMutableArray *articleIAdKeywords;

+ (Class)articleIAdCategoriesType;
+ (Class)articleIAdSectionIDsType;
+ (Class)channelIAdKeywordsType;
+ (Class)channelIAdCategoriesType;
+ (Class)articleIAdKeywordsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearArticleIAdCategories;
- (void)addArticleIAdCategories:(id)a0;
- (unsigned long long)articleIAdCategoriesCount;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)a0;
- (void)clearArticleIAdSectionIDs;
- (void)addArticleIAdSectionIDs:(id)a0;
- (unsigned long long)articleIAdSectionIDsCount;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)a0;
- (void)clearChannelIAdKeywords;
- (void)addChannelIAdKeywords:(id)a0;
- (unsigned long long)channelIAdKeywordsCount;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)a0;
- (void)clearChannelIAdCategories;
- (void)addChannelIAdCategories:(id)a0;
- (unsigned long long)channelIAdCategoriesCount;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)a0;
- (void)clearArticleIAdKeywords;
- (void)addArticleIAdKeywords:(id)a0;
- (unsigned long long)articleIAdKeywordsCount;
- (id)articleIAdKeywordsAtIndex:(unsigned long long)a0;

@end
