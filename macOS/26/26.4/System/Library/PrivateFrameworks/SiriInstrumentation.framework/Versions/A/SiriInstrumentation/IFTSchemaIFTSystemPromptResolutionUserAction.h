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
- (void)deleteActionCanceled;
- (void)deleteDisambiguationIndexSelected;
- (void)deleteIsActionConfirmed;
- (void)deleteIsParameterConfirmed;
- (void)deleteRequirementAddressed;

@end
