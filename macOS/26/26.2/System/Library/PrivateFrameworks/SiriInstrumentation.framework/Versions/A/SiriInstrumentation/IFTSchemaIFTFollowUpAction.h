@class NSData, IFTSchemaIFTFollowUpActionExecutableAction;

@interface IFTSchemaIFTFollowUpAction : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTFollowUpActionExecutableAction *action;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteAction;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
