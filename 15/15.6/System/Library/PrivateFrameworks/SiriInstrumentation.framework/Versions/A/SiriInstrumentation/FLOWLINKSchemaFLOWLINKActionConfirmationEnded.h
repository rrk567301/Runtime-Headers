@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionConfirmationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isCorrectAction : 1; } _has;
}

@property (nonatomic) char isCorrectAction;
@property (nonatomic) char hasIsCorrectAction;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsCorrectAction;
- (id)suppressMessageUnderConditions;

@end
