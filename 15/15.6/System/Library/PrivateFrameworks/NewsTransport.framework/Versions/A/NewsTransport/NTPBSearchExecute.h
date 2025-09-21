@class NSString, NSMutableArray;

@interface NTPBSearchExecute : PBCodable <NSCopying> {
    struct { unsigned char searchExecutionMethod : 1; unsigned char searchLocation : 1; unsigned char totalResults : 1; } _has;
}

@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) char hasSearchLocation;
@property (nonatomic) int searchLocation;
@property (nonatomic) char hasSearchExecutionMethod;
@property (nonatomic) int searchExecutionMethod;
@property (nonatomic) char hasTotalResults;
@property (nonatomic) int totalResults;
@property (readonly, nonatomic) char hasTopResultFeedId;
@property (retain, nonatomic) NSString *topResultFeedId;
@property (retain, nonatomic) NSMutableArray *topicResultFeedIds;
@property (retain, nonatomic) NSMutableArray *channelResultFeedIds;
@property (readonly, nonatomic) char hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) char hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) char hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (readonly, nonatomic) char hasTopResultArticleId;
@property (retain, nonatomic) NSString *topResultArticleId;
@property (readonly, nonatomic) char hasTopResultChannelId;
@property (retain, nonatomic) NSString *topResultChannelId;
@property (readonly, nonatomic) char hasTopResultTopicId;
@property (retain, nonatomic) NSString *topResultTopicId;
@property (retain, nonatomic) NSMutableArray *articleResultIds;
@property (readonly, nonatomic) char hasCompletedSearchString;
@property (retain, nonatomic) NSString *completedSearchString;

+ (Class)articleResultIdsType;
+ (Class)channelResultFeedIdsType;
+ (Class)topicResultFeedIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSearchExecutionMethod:(id)a0;
- (int)StringAsSearchLocation:(id)a0;
- (void)addArticleResultIds:(id)a0;
- (void)addChannelResultFeedIds:(id)a0;
- (void)addTopicResultFeedIds:(id)a0;
- (id)articleResultIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)articleResultIdsCount;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)channelResultFeedIdsCount;
- (void)clearArticleResultIds;
- (void)clearChannelResultFeedIds;
- (void)clearTopicResultFeedIds;
- (id)searchExecutionMethodAsString:(int)a0;
- (id)searchLocationAsString:(int)a0;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicResultFeedIdsCount;

@end
