@class NSString, NSMutableArray;

@interface NTPBHeadlineAdElement : PBCodable <NSCopying> {
    struct { unsigned char channelContentProviderID : 1; unsigned char draftArticle : 1; unsigned char paidArticle : 1; unsigned char sponsoredArticle : 1; } _has;
}

@property (readonly, nonatomic) char hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) char hasArticleRating;
@property (retain, nonatomic) NSString *articleRating;
@property (retain, nonatomic) NSMutableArray *articleIAdCategories;
@property (nonatomic) char hasPaidArticle;
@property (nonatomic) char paidArticle;
@property (nonatomic) char hasSponsoredArticle;
@property (nonatomic) char sponsoredArticle;
@property (nonatomic) char hasDraftArticle;
@property (nonatomic) char draftArticle;
@property (retain, nonatomic) NSMutableArray *articleIAdSectionIDs;
@property (retain, nonatomic) NSMutableArray *channelIAdKeywords;
@property (readonly, nonatomic) char hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (readonly, nonatomic) char hasChannelRating;
@property (retain, nonatomic) NSString *channelRating;
@property (retain, nonatomic) NSMutableArray *channelIAdCategories;
@property (nonatomic) char hasChannelContentProviderID;
@property (nonatomic) long long channelContentProviderID;
@property (retain, nonatomic) NSMutableArray *articleIAdKeywords;

+ (Class)articleIAdCategoriesType;
+ (Class)articleIAdKeywordsType;
+ (Class)articleIAdSectionIDsType;
+ (Class)channelIAdCategoriesType;
+ (Class)channelIAdKeywordsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArticleIAdCategories:(id)a0;
- (void)addArticleIAdKeywords:(id)a0;
- (void)addArticleIAdSectionIDs:(id)a0;
- (void)addChannelIAdCategories:(id)a0;
- (void)addChannelIAdKeywords:(id)a0;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)articleIAdCategoriesCount;
- (id)articleIAdKeywordsAtIndex:(unsigned long long)a0;
- (unsigned long long)articleIAdKeywordsCount;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)articleIAdSectionIDsCount;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)channelIAdCategoriesCount;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)a0;
- (unsigned long long)channelIAdKeywordsCount;
- (void)clearArticleIAdCategories;
- (void)clearArticleIAdKeywords;
- (void)clearArticleIAdSectionIDs;
- (void)clearChannelIAdCategories;
- (void)clearChannelIAdKeywords;

@end
