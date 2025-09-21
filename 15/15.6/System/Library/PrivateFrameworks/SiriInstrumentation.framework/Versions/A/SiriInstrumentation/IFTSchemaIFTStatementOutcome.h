@class IFTSchemaIFTActionConfirmation, IFTSchemaIFTActionSuccess, NSData, IFTSchemaIFTParameterDisambiguation, IFTSchemaIFTParameterNeedsValue, IFTSchemaIFTParameterCandidatesNotFound, IFTSchemaIFTParameterConfirmation, IFTSchemaIFTActionRequirement, IFTSchemaIFTToolDisambiguation, IFTSchemaIFTParameterNotAllowed, IFTSchemaIFTActionFailure, IFTSchemaIFTValueDisambiguation;

@interface IFTSchemaIFTStatementOutcome : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTActionSuccess *success;
@property (nonatomic) char hasSuccess;
@property (retain, nonatomic) IFTSchemaIFTActionConfirmation *actionConfirmation;
@property (nonatomic) char hasActionConfirmation;
@property (retain, nonatomic) IFTSchemaIFTParameterNeedsValue *parameterNeedsValue;
@property (nonatomic) char hasParameterNeedsValue;
@property (retain, nonatomic) IFTSchemaIFTParameterConfirmation *parameterConfirmation;
@property (nonatomic) char hasParameterConfirmation;
@property (retain, nonatomic) IFTSchemaIFTParameterDisambiguation *parameterDisambiguation;
@property (nonatomic) char hasParameterDisambiguation;
@property (retain, nonatomic) IFTSchemaIFTParameterNotAllowed *parameterNotAllowed;
@property (nonatomic) char hasParameterNotAllowed;
@property (retain, nonatomic) IFTSchemaIFTParameterCandidatesNotFound *parameterCandidatesNotFounds;
@property (nonatomic) char hasParameterCandidatesNotFounds;
@property (retain, nonatomic) IFTSchemaIFTActionRequirement *actionRequirement;
@property (nonatomic) char hasActionRequirement;
@property (retain, nonatomic) IFTSchemaIFTToolDisambiguation *toolDisambiguation;
@property (nonatomic) char hasToolDisambiguation;
@property (retain, nonatomic) IFTSchemaIFTActionFailure *failure;
@property (nonatomic) char hasFailure;
@property (retain, nonatomic) IFTSchemaIFTValueDisambiguation *valueDisambiguation;
@property (nonatomic) char hasValueDisambiguation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Statementoutcome;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionConfirmation;
- (void)deleteActionRequirement;
- (void)deleteFailure;
- (void)deleteParameterCandidatesNotFounds;
- (void)deleteParameterConfirmation;
- (void)deleteParameterDisambiguation;
- (void)deleteParameterNeedsValue;
- (void)deleteParameterNotAllowed;
- (void)deleteSuccess;
- (void)deleteToolDisambiguation;
- (void)deleteValueDisambiguation;
- (id)suppressMessageUnderConditions;

@end
