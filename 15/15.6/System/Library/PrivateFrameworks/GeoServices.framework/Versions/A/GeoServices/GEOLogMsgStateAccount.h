@class PBUnknownFields;

@interface GEOLogMsgStateAccount : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _possibleActions;
    char _signedIntoIcloud;
    struct { unsigned char has_signedIntoIcloud : 1; } _flags;
}

@property (nonatomic) char hasSignedIntoIcloud;
@property (nonatomic) char signedIntoIcloud;
@property (readonly, nonatomic) unsigned long long possibleActionsCount;
@property (readonly, nonatomic) int *possibleActions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsPossibleActions:(id)a0;
- (void)addPossibleAction:(int)a0;
- (void)clearPossibleActions;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (int)possibleActionAtIndex:(unsigned long long)a0;
- (id)possibleActionsAsString:(int)a0;
- (void)readAll:(char)a0;
- (void)setPossibleActions:(int *)a0 count:(unsigned long long)a1;

@end
