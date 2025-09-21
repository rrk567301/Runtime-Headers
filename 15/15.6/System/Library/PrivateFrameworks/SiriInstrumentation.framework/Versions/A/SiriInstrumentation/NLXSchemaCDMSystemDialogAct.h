@class NLXSchemaCDMSystemPrompted, SISchemaUUID, NLXSchemaCDMSystemReportedSuccess, NLXSchemaCDMSystemOffered, NSData, NLXSchemaCDMSystemInformed, NLXSchemaCDMSystemGaveOptions, NLXSchemaCDMSystemReportedFailure;

@interface NLXSchemaCDMSystemDialogAct : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) char hasId;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (retain, nonatomic) NLXSchemaCDMSystemPrompted *prompted;
@property (nonatomic) char hasPrompted;
@property (retain, nonatomic) NLXSchemaCDMSystemOffered *offered;
@property (nonatomic) char hasOffered;
@property (retain, nonatomic) NLXSchemaCDMSystemGaveOptions *gaveOptions;
@property (nonatomic) char hasGaveOptions;
@property (retain, nonatomic) NLXSchemaCDMSystemInformed *informed;
@property (nonatomic) char hasInformed;
@property (retain, nonatomic) NLXSchemaCDMSystemReportedSuccess *reportedSuccess;
@property (nonatomic) char hasReportedSuccess;
@property (retain, nonatomic) NLXSchemaCDMSystemReportedFailure *reportedFailure;
@property (nonatomic) char hasReportedFailure;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSystemdialogacttype;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteGaveOptions;
- (void)deleteId;
- (void)deleteInformed;
- (void)deleteLinkId;
- (void)deleteOffered;
- (void)deletePrompted;
- (void)deleteReportedFailure;
- (void)deleteReportedSuccess;
- (id)suppressMessageUnderConditions;

@end
