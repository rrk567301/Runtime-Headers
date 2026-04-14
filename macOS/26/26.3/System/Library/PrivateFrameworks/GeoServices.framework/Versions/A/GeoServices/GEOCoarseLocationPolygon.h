@class PBDataReader, NSMutableArray, GEOCoarseLocationRing;

@interface GEOCoarseLocationPolygon : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_holes;
    GEOCoarseLocationRing *_shell;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_holes : 1; unsigned char read_shell : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasShell;
@property (retain, nonatomic) GEOCoarseLocationRing *shell;
@property (retain, nonatomic) NSMutableArray *holes;

+ (BOOL)isValid:(id)a0;
+ (Class)holesType;

- (id)dictionaryRepresentation;
- (void)addHoles:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)description;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)holesAtIndex:(unsigned long long)a0;
- (unsigned long long)holesCount;
- (void)clearHoles;

@end
