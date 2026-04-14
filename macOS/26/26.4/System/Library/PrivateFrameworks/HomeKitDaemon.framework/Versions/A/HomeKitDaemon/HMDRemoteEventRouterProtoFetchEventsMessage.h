@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying> {
    struct { unsigned char fetchType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL hasFetchType;
@property (nonatomic) int fetchType;

+ (Class)topicsType;

- (unsigned long long)topicsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addTopics:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)topicsAtIndex:(unsigned long long)a0;
- (void)clearTopics;
- (int)StringAsFetchType:(id)a0;
- (id)fetchTypeAsString:(int)a0;

@end
