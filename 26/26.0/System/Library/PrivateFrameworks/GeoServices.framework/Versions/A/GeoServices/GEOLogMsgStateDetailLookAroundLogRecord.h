@class PBUnknownFields;

@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _relativeTimestamp;
    int _action;
    int _target;
    struct { unsigned char has_relativeTimestamp : 1; unsigned char has_action : 1; unsigned char has_target : 1; } _flags;
}

@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasTarget;
@property (nonatomic) int target;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsAction:(id)a0;
- (id)actionAsString:(int)a0;
- (int)StringAsTarget:(id)a0;
- (id)targetAsString:(int)a0;

@end
