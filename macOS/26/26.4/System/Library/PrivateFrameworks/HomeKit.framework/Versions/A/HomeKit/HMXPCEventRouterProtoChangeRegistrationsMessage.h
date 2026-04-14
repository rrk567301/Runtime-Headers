@class NSMutableArray;

@interface HMXPCEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicFilterAdditions;
@property (retain, nonatomic) NSMutableArray *topicFilterRemovals;

+ (Class)topicFilterAdditionsType;
+ (Class)topicFilterRemovalsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addTopicFilterAdditions:(id)a0;
- (void)addTopicFilterRemovals:(id)a0;
- (void)clearTopicFilterAdditions;
- (void)clearTopicFilterRemovals;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicFilterAdditionsCount;
- (id)topicFilterRemovalsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicFilterRemovalsCount;

@end
