@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBForYouConfigRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) NSString *configuration;
@property (readonly, nonatomic) BOOL hasTrendingArticleListID;
@property (retain, nonatomic) NSString *trendingArticleListID;
@property (retain, nonatomic) NSMutableArray *editorialArticleListIDs;
@property (retain, nonatomic) NSMutableArray *editorialSectionTagIDs;
@property (readonly, nonatomic) BOOL hasSpotlightArticleID;
@property (retain, nonatomic) NSString *spotlightArticleID;
@property (retain, nonatomic) NSMutableArray *todayFeedTopStoriesArticleIDs;
@property (readonly, nonatomic) BOOL hasTodayFeedConfiguration;
@property (retain, nonatomic) NSString *todayFeedConfiguration;

+ (Class)todayFeedTopStoriesArticleIDsType;
+ (Class)editorialSectionTagIDsType;
+ (Class)editorialArticleListIDsType;

- (void)clearEditorialSectionTagIDs;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)todayFeedTopStoriesArticleIDsCount;
- (void)addEditorialArticleListIDs:(id)a0;
- (void)addTodayFeedTopStoriesArticleIDs:(id)a0;
- (void)clearEditorialArticleListIDs;
- (unsigned long long)editorialSectionTagIDsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearTodayFeedTopStoriesArticleIDs;
- (void)mergeFrom:(id)a0;
- (void)addEditorialSectionTagIDs:(id)a0;
- (unsigned long long)editorialArticleListIDsCount;
- (id)editorialArticleListIDsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)a0;
- (void)dealloc;

@end
