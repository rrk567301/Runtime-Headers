@class IFTSchemaIFTSystemPromptResolutionActionCancellation, NSData, IFTSchemaIFTSystemPromptResolutionRequirementResolution;

@interface IFTSchemaIFTSystemPromptResolutionUserAction : SISchemaInstrumentationMessage

@property (nonatomic) BOOL isActionConfirmed;
@property (nonatomic) BOOL hasIsActionConfirmed;
@property (nonatomic) BOOL isParameterConfirmed;
@property (nonatomic) BOOL hasIsParameterConfirmed;
@property (nonatomic) long long disambiguationIndexSelected;
@property (nonatomic) BOOL hasDisambiguationIndexSelected;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolutionRequirementResolution *requirementAddressed;
@property (nonatomic) BOOL hasRequirementAddressed;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolutionActionCancellation *actionCanceled;
@property (nonatomic) BOOL hasActionCanceled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Systempromptresolutionuseraction;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteActionCanceled;
- (void)deleteDisambiguationIndexSelected;
- (void)deleteIsActionConfirmed;
- (void)deleteIsParameterConfirmed;
- (void)deleteRequirementAddressed;

@end
