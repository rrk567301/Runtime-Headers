@class PBUnknownFields;

@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _durationInOldState;
    double _newCoverage;
    double _oldCoverage;
    int _tileSetStateType;
    struct { unsigned char has_durationInOldState : 1; unsigned char has_newCoverage : 1; unsigned char has_oldCoverage : 1; unsigned char has_tileSetStateType : 1; } _flags;
}

@property (nonatomic) char hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (nonatomic) char hasTileSetStateType;
@property (nonatomic) int tileSetStateType;
@property (nonatomic) char hasOldCoverage;
@property (nonatomic) double oldCoverage;
@property (nonatomic) char hasNewCoverage;
@property (nonatomic) double newCoverage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsTileSetStateType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)tileSetStateTypeAsString:(int)a0;

@end
