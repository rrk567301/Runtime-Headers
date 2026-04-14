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
- (void)deleteAnonymizedSelectedEntityIdentifier;
- (void)deleteConfirmationResolution;
- (void)deleteDisambiguationResolution;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;

@end
