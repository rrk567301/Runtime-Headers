@class NSString, GEOPDPlaceResponse, GEOPDPlaceRequest, NSMutableArray, PBDataReader;

@interface GEORPSuggestionList : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDPlaceRequest *_autocompleteRequest;
    GEOPDPlaceResponse *_autocompleteResponse;
    NSMutableArray *_entrys;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_autocompleteRequest : 1; unsigned char read_autocompleteResponse : 1; unsigned char read_entrys : 1; unsigned char read_query : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasQuery;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *entrys;
@property (readonly, nonatomic) char hasAutocompleteRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *autocompleteRequest;
@property (readonly, nonatomic) char hasAutocompleteResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *autocompleteResponse;

+ (Class)entryType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearEntrys;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)entryAtIndex:(unsigned long long)a0;
- (unsigned long long)entrysCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
