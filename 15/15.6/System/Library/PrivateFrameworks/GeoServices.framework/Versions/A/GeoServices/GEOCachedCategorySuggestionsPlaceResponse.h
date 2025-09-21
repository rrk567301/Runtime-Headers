@class PBDataReader, NSString, GEOPDPlaceResponse, PBUnknownFields;

@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    NSString *_language;
    GEOPDPlaceResponse *_response;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_timestamp : 1; unsigned char read_unknownFields : 1; unsigned char read_countryCode : 1; unsigned char read_language : 1; unsigned char read_response : 1; unsigned char read_sourceURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *response;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
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
