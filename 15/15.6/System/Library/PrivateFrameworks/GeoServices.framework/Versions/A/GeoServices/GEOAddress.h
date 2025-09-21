@class PBDataReader, NSString, GEOStructuredAddress, NSMutableArray, PBUnknownFields;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_formattedAddressLines;
    GEOStructuredAddress *_structuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _formattedAddressType;
    struct { unsigned char has_formattedAddressType : 1; unsigned char read_unknownFields : 1; unsigned char read_formattedAddressLines : 1; unsigned char read_structuredAddress : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *formattedAddressLines;
@property (readonly, nonatomic) char hasStructuredAddress;
@property (retain, nonatomic) GEOStructuredAddress *structuredAddress;
@property (nonatomic) char hasFormattedAddressType;
@property (nonatomic) int formattedAddressType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)formattedAddressLineType;
+ (id)geoAddressForPlaceData:(id)a0;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (id)addressDictionary;
- (id)postalAddress;
- (int)StringAsFormattedAddressType:(id)a0;
- (char)_isEquivalentURLRepresentationTo:(id)a0;
- (void)addFormattedAddressLine:(id)a0;
- (id)bestName;
- (void)clearFormattedAddressLines;
- (void)clearUnknownFields:(char)a0;
- (id)formattedAddressLineAtIndex:(unsigned long long)a0;
- (unsigned long long)formattedAddressLinesCount;
- (id)formattedAddressTypeAsString:(int)a0;
- (id)initWithAddressDictionary:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithPostalAddress:(id)a0;
- (id)initWithUrlRepresentation:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)urlRepresentation;

@end
