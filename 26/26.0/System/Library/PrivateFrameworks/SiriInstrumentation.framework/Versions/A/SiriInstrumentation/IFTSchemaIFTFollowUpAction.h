@class NSData, IFTSchemaIFTFollowUpActionExecutableAction;

@interface IFTSchemaIFTFollowUpAction : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTFollowUpActionExecutableAction *action;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAction;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
