@class NSString, NSMutableArray;

@interface NTPBTopicsFollowed : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTopicGroupingId;
@property (retain, nonatomic) NSString *topicGroupingId;
@property (retain, nonatomic) NSMutableArray *topicIds;

+ (Class)topicIdType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)topicIdAtIndex:(unsigned long long)a0;
- (void)addTopicId:(id)a0;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;

@end
