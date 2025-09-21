@class PBUnknownFields, GEOLabelInfo, PBDataReader, NSMutableArray, GEOStyleAttributes;

@interface GEORouteLineStyleInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLabelInfo *_labelInfo;
    NSMutableArray *_laneChangeInfos;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _endOffsetCm;
    int _purpose;
    unsigned int _startOffsetCm;
    char _preserveStyleInUpdates;
    struct { unsigned char has_endOffsetCm : 1; unsigned char has_purpose : 1; unsigned char has_startOffsetCm : 1; unsigned char has_preserveStyleInUpdates : 1; unsigned char read_unknownFields : 1; unsigned char read_labelInfo : 1; unsigned char read_laneChangeInfos : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) char hasStartOffsetCm;
@property (nonatomic) unsigned int startOffsetCm;
@property (nonatomic) char hasEndOffsetCm;
@property (nonatomic) unsigned int endOffsetCm;
@property (readonly, nonatomic) char hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) char hasLabelInfo;
@property (retain, nonatomic) GEOLabelInfo *labelInfo;
@property (nonatomic) char hasPreserveStyleInUpdates;
@property (nonatomic) char preserveStyleInUpdates;
@property (retain, nonatomic) NSMutableArray *laneChangeInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)laneChangeInfoType;

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
- (int)StringAsPurpose:(id)a0;
- (void)addLaneChangeInfo:(id)a0;
- (void)clearLaneChangeInfos;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)laneChangeInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)laneChangeInfosCount;
- (id)purposeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
