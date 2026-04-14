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

+ (Class)channelIAdCategoriesType;
+ (Class)articleIAdSectionIDsType;
+ (Class)articleIAdCategoriesType;
+ (Class)articleIAdKeywordsType;
+ (Class)channelIAdKeywordsType;

- (unsigned long long)channelIAdKeywordsCount;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)a0;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)a0;
- (void)clearArticleIAdSectionIDs;
- (void)clearChannelIAdCategories;
- (unsigned long long)channelIAdCategoriesCount;
- (unsigned long long)articleIAdSectionIDsCount;
- (void)addChannelIAdKeywords:(id)a0;
- (void)clearArticleIAdKeywords;
- (void)clearChannelIAdKeywords;
- (id)articleIAdKeywordsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)articleIAdKeywordsCount;
- (BOOL)isEqual:(id)a0;
- (void)addArticleIAdSectionIDs:(id)a0;
- (unsigned long long)articleIAdCategoriesCount;
- (id)dictionaryRepresentation;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)addArticleIAdKeywords:(id)a0;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addChannelIAdCategories:(id)a0;
- (id)description;
- (void)clearArticleIAdCategories;
- (void)writeTo:(id)a0;
- (void)addArticleIAdCategories:(id)a0;

@end
