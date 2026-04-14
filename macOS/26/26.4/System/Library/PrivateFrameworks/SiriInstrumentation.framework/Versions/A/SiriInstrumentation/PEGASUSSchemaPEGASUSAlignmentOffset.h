@class NSData;

@interface PEGASUSSchemaPEGASUSAlignmentOffset : SISchemaInstrumentationMessage {
    struct { unsigned char startCharacterIdx : 1; unsigned char endCharacterIdx : 1; } _has;
}

@property (nonatomic) int startCharacterIdx;
@property (nonatomic) BOOL hasStartCharacterIdx;
@property (nonatomic) int endCharacterIdx;
@property (nonatomic) BOOL hasEndCharacterIdx;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndCharacterIdx;
- (void)deleteStartCharacterIdx;

@end
