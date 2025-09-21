@class NSString, NSMutableArray;

@interface NTPBTopicsFollowed : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTopicGroupingId;
@property (retain, nonatomic) NSString *topicGroupingId;
@property (retain, nonatomic) NSMutableArray *topicIds;

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
- (void)addTopicId:(id)a0;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;

@end
