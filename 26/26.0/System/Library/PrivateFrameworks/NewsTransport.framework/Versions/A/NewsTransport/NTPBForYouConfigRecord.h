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

+ (Class)editorialArticleListIDsType;
+ (Class)editorialSectionTagIDsType;
+ (Class)todayFeedTopStoriesArticleIDsType;

- (void)clearEditorialSectionTagIDs;
- (id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)editorialSectionTagIDsCount;
- (void)clearEditorialArticleListIDs;
- (unsigned long long)todayFeedTopStoriesArticleIDsCount;
- (void)mergeFrom:(id)a0;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)a0;
- (void)addTodayFeedTopStoriesArticleIDs:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)editorialArticleListIDsCount;
- (id)editorialArticleListIDsAtIndex:(unsigned long long)a0;
- (void)clearTodayFeedTopStoriesArticleIDs;
- (void)addEditorialArticleListIDs:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEditorialSectionTagIDs:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
