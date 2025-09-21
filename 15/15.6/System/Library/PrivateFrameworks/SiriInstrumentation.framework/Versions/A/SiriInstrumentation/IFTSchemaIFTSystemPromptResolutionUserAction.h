@class IFTSchemaIFTSystemPromptResolutionActionCancellation, NSData, IFTSchemaIFTSystemPromptResolutionRequirementResolution;

@interface IFTSchemaIFTSystemPromptResolutionUserAction : SISchemaInstrumentationMessage

@property (nonatomic) char isActionConfirmed;
@property (nonatomic) char hasIsActionConfirmed;
@property (nonatomic) char isParameterConfirmed;
@property (nonatomic) char hasIsParameterConfirmed;
@property (nonatomic) long long disambiguationIndexSelected;
@property (nonatomic) char hasDisambiguationIndexSelected;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolutionRequirementResolution *requirementAddressed;
@property (nonatomic) char hasRequirementAddressed;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolutionActionCancellation *actionCanceled;
@property (nonatomic) char hasActionCanceled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Systempromptresolutionuseraction;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionCanceled;
- (void)deleteDisambiguationIndexSelected;
- (void)deleteIsActionConfirmed;
- (void)deleteIsParameterConfirmed;
- (void)deleteRequirementAddressed;
- (id)suppressMessageUnderConditions;

@end
