@class PBDataReader, GEOPDClientMetadata, NSMutableArray;

@interface GEOWiFiQualityServiceRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_locationSearches;
    NSMutableArray *_networkSearches;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_clientMetadata : 1; unsigned char read_locationSearches : 1; unsigned char read_networkSearches : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *locationSearches;
@property (retain, nonatomic) NSMutableArray *networkSearches;

+ (BOOL)isValid:(id)a0;
+ (Class)locationSearchesType;
+ (Class)networkSearchesType;

- (unsigned long long)locationSearchesCount;
- (id)locationSearchesAtIndex:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addNetworkSearches:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithData:(id)a0;
- (Class)responseClass;
- (void)addLocationSearches:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearNetworkSearches;
- (BOOL)isEqual:(id)a0;
- (void)clearLocationSearches;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)networkSearchesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)description;
- (unsigned long long)networkSearchesCount;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (unsigned int)requestTypeCode;
- (id)initWithJSON:(id)a0;

@end
