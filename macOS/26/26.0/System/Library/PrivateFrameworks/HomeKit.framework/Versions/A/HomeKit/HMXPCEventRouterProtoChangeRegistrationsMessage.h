@class NSMutableArray;

@interface HMXPCEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicFilterAdditions;
@property (retain, nonatomic) NSMutableArray *topicFilterRemovals;

+ (Class)topicFilterAdditionsType;
+ (Class)topicFilterRemovalsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTopicFilterAdditions:(id)a0;
- (void)addTopicFilterRemovals:(id)a0;
- (void)clearTopicFilterAdditions;
- (void)clearTopicFilterRemovals;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicFilterAdditionsCount;
- (id)topicFilterRemovalsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicFilterRemovalsCount;

@end
