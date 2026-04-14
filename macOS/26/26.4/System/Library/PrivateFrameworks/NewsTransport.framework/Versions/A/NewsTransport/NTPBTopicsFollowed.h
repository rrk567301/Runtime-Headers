@class NSString, NSMutableArray;

@interface NTPBTopicsFollowed : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTopicGroupingId;
@property (retain, nonatomic) NSString *topicGroupingId;
@property (retain, nonatomic) NSMutableArray *topicIds;

+ (Class)topicIdType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)topicIdAtIndex:(unsigned long long)a0;
- (void)addTopicId:(id)a0;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;

@end
