@class PBUnknownFields, PBDataReader, NSMutableArray, GEOStyleAttributes;

@interface GEOCameraInput : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStyleAttributes *_cameraStyling;
    NSMutableArray *_eventPositions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_cameraStyling : 1; unsigned char read_eventPositions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *eventPositions;
@property (readonly, nonatomic) BOOL hasCameraStyling;
@property (retain, nonatomic) GEOStyleAttributes *cameraStyling;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)eventPositionType;

- (id)dictionaryRepresentation;
- (id)initWithData:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)description;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addEventPosition:(id)a0;
- (void)clearEventPositions;
- (id)eventPositionAtIndex:(unsigned long long)a0;
- (unsigned long long)eventPositionsCount;

@end
