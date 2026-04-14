@class NSMutableArray, PBUnknownFields;

@interface GEORevealedPlaceCardModuleTypeInfos : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_buttons;
}

@property (retain, nonatomic) NSMutableArray *buttons;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)buttonsType;

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
- (id)buttonsAtIndex:(unsigned long long)a0;
- (void)addButtons:(id)a0;
- (unsigned long long)buttonsCount;
- (void)clearButtons;

@end
