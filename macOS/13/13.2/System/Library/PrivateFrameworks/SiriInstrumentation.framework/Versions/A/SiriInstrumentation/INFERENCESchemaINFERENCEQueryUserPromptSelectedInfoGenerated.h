@class NSString, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) BOOL hasOriginalResolutionContextId;
@property (retain, nonatomic) SISchemaUUID *queryId;
@property (nonatomic) BOOL hasQueryId;
@property (nonatomic) int disambiguationResolution;
@property (nonatomic) BOOL hasDisambiguationResolution;
@property (nonatomic) int confirmationResolution;
@property (nonatomic) BOOL hasConfirmationResolution;
@property (copy, nonatomic) NSString *anonymizedSelectedEntityIdentifier;
@property (nonatomic) BOOL hasAnonymizedSelectedEntityIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichResolutiontype;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (void)deleteDisambiguationResolution;
- (void)deleteConfirmationResolution;
- (void)deleteAnonymizedSelectedEntityIdentifier;

@end
