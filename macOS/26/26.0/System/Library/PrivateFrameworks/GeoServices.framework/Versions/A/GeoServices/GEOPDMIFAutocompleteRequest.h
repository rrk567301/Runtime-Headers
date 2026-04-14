@class GEOPDPlaceResponse, GEOPDMIFAutocompleteRequestParameters, NSMutableArray, PBDataReader;

@interface GEOPDMIFAutocompleteRequest : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_clientResultItems;
    GEOPDMIFAutocompleteRequestParameters *_requestParameters;
    GEOPDPlaceResponse *_serverResponse;
    NSMutableArray *_serverResultItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_clientResultItems : 1; unsigned char read_requestParameters : 1; unsigned char read_serverResponse : 1; unsigned char read_serverResultItems : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRequestParameters;
@property (retain, nonatomic) GEOPDMIFAutocompleteRequestParameters *requestParameters;
@property (readonly, nonatomic) BOOL hasServerResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *serverResponse;
@property (retain, nonatomic) NSMutableArray *serverResultItems;
@property (retain, nonatomic) NSMutableArray *clientResultItems;

+ (BOOL)isValid:(id)a0;
+ (Class)clientResultItemType;
+ (Class)serverResultItemType;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addClientResultItem:(id)a0;
- (void)addServerResultItem:(id)a0;
- (void)clearClientResultItems;
- (void)clearServerResultItems;
- (id)clientResultItemAtIndex:(unsigned long long)a0;
- (unsigned long long)clientResultItemsCount;
- (id)serverResultItemAtIndex:(unsigned long long)a0;
- (unsigned long long)serverResultItemsCount;

@end
