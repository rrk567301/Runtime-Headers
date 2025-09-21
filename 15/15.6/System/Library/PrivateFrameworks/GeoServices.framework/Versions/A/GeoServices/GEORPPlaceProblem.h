@interface GEORPPlaceProblem : PBCodable <NSCopying> {
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    unsigned int _problematicDepartureSequenceIndex;
    struct { unsigned char has_componentIndex : 1; unsigned char has_componentValueIndex : 1; unsigned char has_problematicDepartureSequenceIndex : 1; } _flags;
}

@property (nonatomic) char hasComponentIndex;
@property (nonatomic) unsigned int componentIndex;
@property (nonatomic) char hasComponentValueIndex;
@property (nonatomic) unsigned int componentValueIndex;
@property (nonatomic) char hasProblematicDepartureSequenceIndex;
@property (nonatomic) unsigned int problematicDepartureSequenceIndex;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
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
