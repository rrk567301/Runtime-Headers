@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying> {
    struct { unsigned char fetchType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL hasFetchType;
@property (nonatomic) int fetchType;

+ (Class)topicsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)topicsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)clearTopics;
- (void)addTopics:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)topicsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsFetchType:(id)a0;
- (id)fetchTypeAsString:(int)a0;

@end
