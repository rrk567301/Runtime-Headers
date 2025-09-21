@class NSString, NSMutableArray;

@interface NTPBUserOnboardingResult : PBCodable <NSCopying> {
    struct { unsigned char resultType : 1; unsigned char totalChannelSelections : 1; unsigned char totalResets : 1; unsigned char totalTopicSelections : 1; unsigned char icloudAccountMatch : 1; unsigned char sawEmailOptIn : 1; } _has;
}

@property (nonatomic) char hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) char hasIcloudAccountMatch;
@property (nonatomic) char icloudAccountMatch;
@property (readonly, nonatomic) char hasOnboardAbandonStage;
@property (retain, nonatomic) NSString *onboardAbandonStage;
@property (nonatomic) char hasTotalChannelSelections;
@property (nonatomic) int totalChannelSelections;
@property (nonatomic) char hasTotalTopicSelections;
@property (nonatomic) int totalTopicSelections;
@property (retain, nonatomic) NSMutableArray *channelIds;
@property (retain, nonatomic) NSMutableArray *topicIds;
@property (nonatomic) char hasTotalResets;
@property (nonatomic) int totalResets;
@property (nonatomic) char hasSawEmailOptIn;
@property (nonatomic) char sawEmailOptIn;

+ (Class)channelIdType;
+ (Class)topicIdType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)topicIdAtIndex:(unsigned long long)a0;
- (unsigned long long)channelIdsCount;
- (void)clearChannelIds;
- (void)addChannelId:(id)a0;
- (void)addTopicId:(id)a0;
- (id)channelIdAtIndex:(unsigned long long)a0;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;

@end
