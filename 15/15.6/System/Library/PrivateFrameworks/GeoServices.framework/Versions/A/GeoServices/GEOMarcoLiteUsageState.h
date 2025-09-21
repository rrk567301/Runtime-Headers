@class PBUnknownFields;

@interface GEOMarcoLiteUsageState : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _stateExitReason;
    unsigned int _stateTime;
    int _stateType;
    unsigned int _stateValue;
    struct { unsigned char has_stateExitReason : 1; unsigned char has_stateTime : 1; unsigned char has_stateType : 1; unsigned char has_stateValue : 1; } _flags;
}

@property (nonatomic) char hasStateType;
@property (nonatomic) int stateType;
@property (nonatomic) char hasStateValue;
@property (nonatomic) unsigned int stateValue;
@property (nonatomic) char hasStateTime;
@property (nonatomic) unsigned int stateTime;
@property (nonatomic) char hasStateExitReason;
@property (nonatomic) int stateExitReason;
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
- (int)StringAsStateType:(id)a0;
- (int)StringAsStateExitReason:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)stateExitReasonAsString:(int)a0;
- (id)stateTypeAsString:(int)a0;

@end
