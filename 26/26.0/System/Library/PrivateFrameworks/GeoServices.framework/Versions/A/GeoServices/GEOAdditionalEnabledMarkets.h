@class PBDataReader, NSArray, NSDictionary, NSMutableArray, PBUnknownFields;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_offlineMarkets;
    NSMutableArray *_transitMarkets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_offlineMarkets : 1; unsigned char read_transitMarkets : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (class, readonly, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;

@property (readonly, nonatomic) NSArray *queryItems;
@property (readonly, nonatomic) NSDictionary *queryParameters;
@property (retain, nonatomic) NSMutableArray *transitMarkets;
@property (retain, nonatomic) NSMutableArray *offlineMarkets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)transitMarketType;
+ (BOOL)isValid:(id)a0;
+ (Class)offlineMarketType;
+ (id)_additionalEnabledTransitMarkets;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)reload;
- (id)init;
- (void)mergeFrom:(id)a0;
- (id)transitMarketAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)addOfflineMarket:(id)a0;
- (void)addTransitMarket:(id)a0;
- (void)clearOfflineMarkets;
- (void)clearTransitMarkets;
- (id)offlineMarketAtIndex:(unsigned long long)a0;
- (unsigned long long)offlineMarketsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)transitMarketsCount;

@end
