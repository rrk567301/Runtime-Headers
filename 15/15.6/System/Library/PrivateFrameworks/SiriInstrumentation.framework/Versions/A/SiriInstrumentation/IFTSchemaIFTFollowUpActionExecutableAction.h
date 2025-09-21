@class IFTSchemaIFTFollowUpActionExecutableActionLinkAction, NSData;

@interface IFTSchemaIFTFollowUpActionExecutableAction : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTFollowUpActionExecutableActionLinkAction *linkAction;
@property (nonatomic) char hasLinkAction;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Followupactionexecutableaction;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkAction;
- (id)suppressMessageUnderConditions;

@end
