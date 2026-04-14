@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_instructions;
    NSMutableArray *_laneInfos;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_instructions : 1; unsigned char read_laneInfos : 1; unsigned char read_titles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *laneInfos;
@property (retain, nonatomic) NSMutableArray *instructions;
@property (retain, nonatomic) NSMutableArray *titles;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)laneInfoType;
+ (Class)instructionType;
+ (Class)titleType;

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
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearLaneInfos;
- (void)addLaneInfo:(id)a0;
- (unsigned long long)laneInfosCount;
- (id)laneInfoAtIndex:(unsigned long long)a0;
- (void)clearInstructions;
- (void)addInstruction:(id)a0;
- (unsigned long long)instructionsCount;
- (id)instructionAtIndex:(unsigned long long)a0;
- (void)clearTitles;
- (void)addTitle:(id)a0;
- (unsigned long long)titlesCount;
- (id)titleAtIndex:(unsigned long long)a0;

@end
