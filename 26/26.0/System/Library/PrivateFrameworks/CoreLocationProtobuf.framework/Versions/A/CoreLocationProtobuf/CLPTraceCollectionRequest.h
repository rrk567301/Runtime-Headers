@class CLPMeta, NSMutableArray;

@interface CLPTraceCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

+ (Class)eventsType;

- (id)typeAsString:(int)a0;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
