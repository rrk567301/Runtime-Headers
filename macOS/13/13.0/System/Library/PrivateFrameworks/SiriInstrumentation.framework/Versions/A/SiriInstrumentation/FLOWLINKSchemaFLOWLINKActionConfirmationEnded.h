@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionConfirmationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isCorrectAction : 1; } _has;
}

@property (nonatomic) BOOL isCorrectAction;
@property (nonatomic) BOOL hasIsCorrectAction;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteIsCorrectAction;

@end
