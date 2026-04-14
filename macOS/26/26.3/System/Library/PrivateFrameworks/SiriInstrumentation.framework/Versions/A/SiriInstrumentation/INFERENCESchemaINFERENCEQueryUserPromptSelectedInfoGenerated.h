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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAnonymizedSelectedEntityIdentifier;
- (void)deleteConfirmationResolution;
- (void)deleteDisambiguationResolution;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;

@end
