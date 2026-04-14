@class NSMutableArray;

@interface AppTelemetryTelemetryMessage : PBCodable <NSCopying> {
    struct { unsigned char token : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasToken;
@property (nonatomic) unsigned long long token;

+ (Class)eventsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
