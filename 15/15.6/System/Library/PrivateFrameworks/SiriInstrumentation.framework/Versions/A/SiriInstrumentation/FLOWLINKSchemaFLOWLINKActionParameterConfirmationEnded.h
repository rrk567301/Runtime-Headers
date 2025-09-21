@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionParameterConfirmationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isCorrectParameter : 1; } _has;
}

@property (nonatomic) char isCorrectParameter;
@property (nonatomic) char hasIsCorrectParameter;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsCorrectParameter;
- (id)suppressMessageUnderConditions;

@end
