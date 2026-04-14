@class CLPMeta, NSMutableArray;

@interface CLPTraceCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

+ (Class)eventsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (unsigned int)requestTypeCode;
- (int)StringAsType:(id)a0;
- (Class)responseClass;
- (id)description;
- (void)addEvents:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
