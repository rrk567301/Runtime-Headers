@class NSMutableArray, PBUnknownFields;

@interface GEOLaneInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrows;
    char _hov;
    char _preferredForMultipleManeuvers;
    char _supportsManeuver;
    struct { unsigned char has_hov : 1; unsigned char has_preferredForMultipleManeuvers : 1; unsigned char has_supportsManeuver : 1; } _flags;
}

@property (nonatomic) char hasSupportsManeuver;
@property (nonatomic) char supportsManeuver;
@property (nonatomic) char hasPreferredForMultipleManeuvers;
@property (nonatomic) char preferredForMultipleManeuvers;
@property (nonatomic) char hasHov;
@property (nonatomic) char hov;
@property (retain, nonatomic) NSMutableArray *arrows;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)arrowType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArrow:(id)a0;
- (id)arrowAtIndex:(unsigned long long)a0;
- (unsigned long long)arrowsCount;
- (void)clearArrows;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
