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

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithData:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)addMapsId:(id)a0;
- (void)addServerDynamicContext:(id)a0;
- (void)clearMapsIds;
- (void)clearServerDynamicContexts;
- (id)mapsIdAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsIdsCount;
- (id)serverDynamicContextAtIndex:(unsigned long long)a0;
- (unsigned long long)serverDynamicContextsCount;

@end
