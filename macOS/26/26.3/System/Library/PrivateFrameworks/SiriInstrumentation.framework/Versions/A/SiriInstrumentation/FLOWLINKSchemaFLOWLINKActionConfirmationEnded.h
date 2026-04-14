@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionConfirmationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isCorrectAction : 1; } _has;
}

@property (nonatomic) BOOL isCorrectAction;
@property (nonatomic) BOOL hasIsCorrectAction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsCorrectAction;

@end
