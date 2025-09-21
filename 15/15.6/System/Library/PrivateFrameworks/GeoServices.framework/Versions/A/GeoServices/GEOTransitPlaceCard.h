@class NSString, PBDataReader, GEOTransitDepartureSequenceUsage;

@interface GEOTransitPlaceCard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_incidentType;
    GEOTransitDepartureSequenceUsage *_transitDepartureSequenceUsage;
    NSString *_transitSystemName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transitCategory;
    struct { unsigned char has_transitCategory : 1; unsigned char read_incidentType : 1; unsigned char read_transitDepartureSequenceUsage : 1; unsigned char read_transitSystemName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasTransitCategory;
@property (nonatomic) int transitCategory;
@property (readonly, nonatomic) char hasTransitSystemName;
@property (retain, nonatomic) NSString *transitSystemName;
@property (readonly, nonatomic) char hasTransitDepartureSequenceUsage;
@property (retain, nonatomic) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage;
@property (readonly, nonatomic) char hasIncidentType;
@property (retain, nonatomic) NSString *incidentType;

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
- (int)StringAsTransitCategory:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)transitCategoryAsString:(int)a0;

@end
