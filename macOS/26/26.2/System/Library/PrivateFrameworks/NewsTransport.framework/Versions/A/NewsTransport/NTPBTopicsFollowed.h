@class NSString, NSMutableArray;

@interface NTPBTopicsFollowed : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTopicGroupingId;
@property (retain, nonatomic) NSString *topicGroupingId;
@property (retain, nonatomic) NSMutableArray *topicIds;

+ (Class)topicIdType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)topicIdAtIndex:(unsigned long long)a0;
- (void)addTopicId:(id)a0;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;

@end
