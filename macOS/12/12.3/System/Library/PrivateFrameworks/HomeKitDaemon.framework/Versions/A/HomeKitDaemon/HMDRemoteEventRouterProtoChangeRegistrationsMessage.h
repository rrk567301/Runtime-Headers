@class NSMutableArray;

@interface HMDRemoteEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying> {
    NSMutableArray *_topicAdditions;
    NSMutableArray *_topicFilterAdditions;
    NSMutableArray *_topicFilterRemovals;
    NSMutableArray *_topicRemovals;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
