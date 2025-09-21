@class NSString, NSMutableArray, PBDataReader;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_addressID;
    NSMutableArray *_addressResults;
    NSMutableArray *_significantLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _correctionStatus;
    struct { unsigned char has_correctionStatus : 1; unsigned char read_addressID : 1; unsigned char read_addressResults : 1; unsigned char read_significantLocations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasCorrectionStatus;
@property (nonatomic) int correctionStatus;
@property (retain, nonatomic) NSMutableArray *significantLocations;
@property (readonly, nonatomic) char hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSMutableArray *addressResults;

+ (Class)addressResultType;
+ (char)isValid:(id)a0;
+ (Class)significantLocationType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)StringAsCorrectionStatus:(id)a0;
- (void)addAddressResult:(id)a0;
- (void)addSignificantLocation:(id)a0;
- (id)addressResultAtIndex:(unsigned long long)a0;
- (unsigned long long)addressResultsCount;
- (void)clearAddressResults;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearSignificantLocations;
- (id)correctionStatusAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)significantLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)significantLocationsCount;

@end
