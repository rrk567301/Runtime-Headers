@class PBDataReader, GEOPDMapsIdentifier, GEOPDPlace, PBUnknownFields;

@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _distance;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _muid;
    GEOPDPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _resultProviderId;
    struct { unsigned char has_distance : 1; unsigned char has_muid : 1; unsigned char has_resultProviderId : 1; unsigned char read_unknownFields : 1; unsigned char read_mapsId : 1; unsigned char read_place : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (readonly, nonatomic) char hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic) char hasDistance;
@property (nonatomic) double distance;
@property (readonly, nonatomic) char hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
