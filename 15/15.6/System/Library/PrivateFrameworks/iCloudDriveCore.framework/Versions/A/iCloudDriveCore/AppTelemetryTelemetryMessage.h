@class NSMutableArray;

@interface AppTelemetryTelemetryMessage : PBCodable <NSCopying> {
    struct { unsigned char token : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) char hasToken;
@property (nonatomic) unsigned long long token;

+ (Class)eventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEvents:(id)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
