@class PBDataReader, NSString, GEOLatLng, GEOAddress, PBUnknownFields;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_correctedAddressSecondaryStreetLine;
    GEOAddress *_correctedAddress;
    GEOLatLng *_correctedCoordinate;
    NSString *_customLabel;
    double _lastUpdateDate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _hasSubmittedRAP;
    struct { unsigned char has_lastUpdateDate : 1; unsigned char has_hasSubmittedRAP : 1; unsigned char read_unknownFields : 1; unsigned char read_correctedAddressSecondaryStreetLine : 1; unsigned char read_correctedAddress : 1; unsigned char read_correctedCoordinate : 1; unsigned char read_customLabel : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasCorrectedCoordinate;
@property (retain, nonatomic) GEOLatLng *correctedCoordinate;
@property (readonly, nonatomic) char hasCorrectedAddress;
@property (retain, nonatomic) GEOAddress *correctedAddress;
@property (readonly, nonatomic) char hasCorrectedAddressSecondaryStreetLine;
@property (retain, nonatomic) NSString *correctedAddressSecondaryStreetLine;
@property (readonly, nonatomic) char hasCustomLabel;
@property (retain, nonatomic) NSString *customLabel;
@property (nonatomic) char hasLastUpdateDate;
@property (nonatomic) double lastUpdateDate;
@property (nonatomic) char hasHasSubmittedRAP;
@property (nonatomic) char hasSubmittedRAP;
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
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
