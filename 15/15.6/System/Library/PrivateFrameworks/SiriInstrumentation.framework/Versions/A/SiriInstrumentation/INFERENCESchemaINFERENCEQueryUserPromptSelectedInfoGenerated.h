@class NSString, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) char hasOriginalResolutionContextId;
@property (retain, nonatomic) SISchemaUUID *queryId;
@property (nonatomic) char hasQueryId;
@property (nonatomic) int disambiguationResolution;
@property (nonatomic) char hasDisambiguationResolution;
@property (nonatomic) int confirmationResolution;
@property (nonatomic) char hasConfirmationResolution;
@property (copy, nonatomic) NSString *anonymizedSelectedEntityIdentifier;
@property (nonatomic) char hasAnonymizedSelectedEntityIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichResolutiontype;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAnonymizedSelectedEntityIdentifier;
- (void)deleteConfirmationResolution;
- (void)deleteDisambiguationResolution;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (id)suppressMessageUnderConditions;

@end
