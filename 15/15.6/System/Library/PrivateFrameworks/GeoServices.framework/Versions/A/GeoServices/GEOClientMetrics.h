@class GEOClientNetworkMetrics, PBUnknownFields;

@interface GEOClientMetrics : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOClientNetworkMetrics *_networkMetrics;
    double _queuedTime;
    int _responseSource;
    struct { unsigned char has_queuedTime : 1; unsigned char has_responseSource : 1; } _flags;
}

@property (nonatomic) char hasResponseSource;
@property (nonatomic) int responseSource;
@property (readonly, nonatomic) char hasNetworkMetrics;
@property (retain, nonatomic) GEOClientNetworkMetrics *networkMetrics;
@property (nonatomic) char hasQueuedTime;
@property (nonatomic) double queuedTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsResponseSource:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)responseSourceAsString:(int)a0;

@end
