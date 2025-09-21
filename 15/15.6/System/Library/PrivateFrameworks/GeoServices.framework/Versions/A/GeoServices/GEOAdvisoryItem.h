@class GEOAdvisoryCard, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOAdvisoryItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAdvisoryCard *_advisoryCard;
    NSMutableArray *_analyticsMessageValues;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _incidentIndex;
    unsigned int _transitIncidentIndex;
    struct { unsigned char has_incidentIndex : 1; unsigned char has_transitIncidentIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_advisoryCard : 1; unsigned char read_analyticsMessageValues : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasAdvisoryCard;
@property (retain, nonatomic) GEOAdvisoryCard *advisoryCard;
@property (nonatomic) char hasIncidentIndex;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic) char hasTransitIncidentIndex;
@property (nonatomic) unsigned int transitIncidentIndex;
@property (retain, nonatomic) NSMutableArray *analyticsMessageValues;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)analyticsMessageValueType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAnalyticsMessageValue:(id)a0;
- (id)analyticsMessageValueAtIndex:(unsigned long long)a0;
- (unsigned long long)analyticsMessageValuesCount;
- (void)clearAnalyticsMessageValues;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
