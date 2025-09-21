@class NSString, PBDataReader;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_direction;
    NSString *_headsign;
    unsigned long long _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_lineId : 1; unsigned char read_direction : 1; unsigned char read_headsign : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (readonly, nonatomic) char hasDirection;
@property (retain, nonatomic) NSString *direction;
@property (readonly, nonatomic) char hasHeadsign;
@property (retain, nonatomic) NSString *headsign;

+ (char)isValid:(id)a0;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
