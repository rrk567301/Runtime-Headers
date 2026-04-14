@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying> {
    struct { unsigned char fetchType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL hasFetchType;
@property (nonatomic) int fetchType;

+ (Class)topicsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)clearTopics;
- (void)addTopics:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)topicsCount;
- (void)mergeFrom:(id)a0;
- (id)topicsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFetchType:(id)a0;
- (id)fetchTypeAsString:(int)a0;

@end
