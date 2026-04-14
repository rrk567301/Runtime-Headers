@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying> {
    struct { unsigned char fetchType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL hasFetchType;
@property (nonatomic) int fetchType;

+ (Class)topicsType;

- (void)clearTopics;
- (id)topicsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)topicsCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)addTopics:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsFetchType:(id)a0;
- (id)fetchTypeAsString:(int)a0;

@end
