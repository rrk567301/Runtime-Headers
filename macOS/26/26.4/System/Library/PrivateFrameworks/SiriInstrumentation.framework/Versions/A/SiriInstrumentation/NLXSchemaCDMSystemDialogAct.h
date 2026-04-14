@class NLXSchemaCDMSystemPrompted, SISchemaUUID, NLXSchemaCDMSystemReportedSuccess, NLXSchemaCDMSystemOffered, NSData, NLXSchemaCDMSystemInformed, NLXSchemaCDMSystemGaveOptions, NLXSchemaCDMSystemReportedFailure;

@interface NLXSchemaCDMSystemDialogAct : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) BOOL hasId;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) NLXSchemaCDMSystemPrompted *prompted;
@property (nonatomic) BOOL hasPrompted;
@property (retain, nonatomic) NLXSchemaCDMSystemOffered *offered;
@property (nonatomic) BOOL hasOffered;
@property (retain, nonatomic) NLXSchemaCDMSystemGaveOptions *gaveOptions;
@property (nonatomic) BOOL hasGaveOptions;
@property (retain, nonatomic) NLXSchemaCDMSystemInformed *informed;
@property (nonatomic) BOOL hasInformed;
@property (retain, nonatomic) NLXSchemaCDMSystemReportedSuccess *reportedSuccess;
@property (nonatomic) BOOL hasReportedSuccess;
@property (retain, nonatomic) NLXSchemaCDMSystemReportedFailure *reportedFailure;
@property (nonatomic) BOOL hasReportedFailure;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSystemdialogacttype;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGaveOptions;
- (void)deleteId;
- (void)deleteInformed;
- (void)deleteLinkId;
- (void)deleteOffered;
- (void)deletePrompted;
- (void)deleteReportedFailure;
- (void)deleteReportedSuccess;

@end
