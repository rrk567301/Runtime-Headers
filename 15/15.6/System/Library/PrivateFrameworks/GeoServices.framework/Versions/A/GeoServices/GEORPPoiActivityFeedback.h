@class PBUnknownFields, PBDataReader, GEOPDMapsIdentifier;

@interface GEORPPoiActivityFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _representativeHours;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _isDataCorrect;
    char _isDataUseful;
    char _isVisualRepresentationValid;
    struct { unsigned char has_isDataCorrect : 1; unsigned char has_isDataUseful : 1; unsigned char has_isVisualRepresentationValid : 1; unsigned char read_unknownFields : 1; unsigned char read_representativeHours : 1; unsigned char read_mapsId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (readonly, nonatomic) unsigned long long representativeHoursCount;
@property (readonly, nonatomic) unsigned int *representativeHours;
@property (nonatomic) char hasIsDataUseful;
@property (nonatomic) char isDataUseful;
@property (nonatomic) char hasIsDataCorrect;
@property (nonatomic) char isDataCorrect;
@property (nonatomic) char hasIsVisualRepresentationValid;
@property (nonatomic) char isVisualRepresentationValid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (void)addRepresentativeHours:(unsigned int)a0;
- (void)clearRepresentativeHours;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (unsigned int)representativeHoursAtIndex:(unsigned long long)a0;
- (void)setRepresentativeHours:(unsigned int *)a0 count:(unsigned long long)a1;

@end
