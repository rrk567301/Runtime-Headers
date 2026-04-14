@class NSMutableArray, PBDataReader;

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_possibleStops;
    NSMutableArray *_scheduledLinks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_possibleStops : 1; unsigned char read_scheduledLinks : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *scheduledLinks;
@property (retain, nonatomic) NSMutableArray *possibleStops;

+ (BOOL)isValid:(id)a0;
+ (Class)scheduledLinkType;
+ (Class)possibleStopType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithRoute:(id)a0;
- (void)clearScheduledLinks;
- (void)addScheduledLink:(id)a0;
- (unsigned long long)scheduledLinksCount;
- (id)scheduledLinkAtIndex:(unsigned long long)a0;
- (void)clearPossibleStops;
- (void)addPossibleStop:(id)a0;
- (unsigned long long)possibleStopsCount;
- (id)possibleStopAtIndex:(unsigned long long)a0;

@end
