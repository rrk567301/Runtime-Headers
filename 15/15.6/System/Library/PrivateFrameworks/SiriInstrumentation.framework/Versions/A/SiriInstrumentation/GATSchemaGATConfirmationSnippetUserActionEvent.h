@class NSData;

@interface GATSchemaGATConfirmationSnippetUserActionEvent : SISchemaInstrumentationMessage {
    struct { unsigned char outcome : 1; } _has;
}

@property (nonatomic) int outcome;
@property (nonatomic) char hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOutcome;
- (id)suppressMessageUnderConditions;

@end
