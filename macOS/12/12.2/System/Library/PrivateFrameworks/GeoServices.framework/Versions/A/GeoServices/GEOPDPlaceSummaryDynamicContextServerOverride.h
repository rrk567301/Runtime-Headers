@class NSArray, NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryDynamicContextServerOverride : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_mapsIds;
    NSMutableArray *_serverDynamicContexts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_mapsIds : 1; unsigned char read_serverDynamicContexts : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSArray *mapItemIdentifiers;
@property (retain, nonatomic) NSMutableArray *mapsIds;
@property (retain, nonatomic) NSMutableArray *serverDynamicContexts;

+ (BOOL)isValid:(id)a0;
+ (Class)mapsIdType;
+ (Class)serverDynamicContextType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)mapsIdsCount;
- (void)addMapsId:(id)a0;
- (void)addServerDynamicContext:(id)a0;
- (void)clearMapsIds;
- (id)mapsIdAtIndex:(unsigned long long)a0;
- (unsigned long long)serverDynamicContextsCount;
- (void)clearServerDynamicContexts;
- (id)serverDynamicContextAtIndex:(unsigned long long)a0;

@end
