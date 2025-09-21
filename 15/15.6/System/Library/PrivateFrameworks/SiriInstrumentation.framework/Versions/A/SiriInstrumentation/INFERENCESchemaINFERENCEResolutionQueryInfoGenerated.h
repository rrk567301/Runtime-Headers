@class NSString, NSArray, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEResolutionQueryInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char resolutionState : 1; unsigned char forcePromptType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) char hasOriginalResolutionContextId;
@property (retain, nonatomic) SISchemaUUID *queryId;
@property (nonatomic) char hasQueryId;
@property (nonatomic) int resolutionState;
@property (nonatomic) char hasResolutionState;
@property (nonatomic) int forcePromptType;
@property (nonatomic) char hasForcePromptType;
@property (copy, nonatomic) NSString *recommenderModelVersion;
@property (nonatomic) char hasRecommenderModelVersion;
@property (copy, nonatomic) NSArray *anonymizedRecommendedEntityIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAnonymizedRecommendedEntityIdentifier:(id)a0;
- (id)anonymizedRecommendedEntityIdentifierAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymizedRecommendedEntityIdentifierCount;
- (void)clearAnonymizedRecommendedEntityIdentifier;
- (void)deleteAnonymizedRecommendedEntityIdentifier;
- (void)deleteForcePromptType;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (void)deleteRecommenderModelVersion;
- (void)deleteResolutionState;
- (id)suppressMessageUnderConditions;

@end
