@class NSString, NSArray, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEResolutionQueryInfoGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char resolutionState : 1; unsigned char forcePromptType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) BOOL hasOriginalResolutionContextId;
@property (retain, nonatomic) SISchemaUUID *queryId;
@property (nonatomic) BOOL hasQueryId;
@property (nonatomic) int resolutionState;
@property (nonatomic) BOOL hasResolutionState;
@property (nonatomic) int forcePromptType;
@property (nonatomic) BOOL hasForcePromptType;
@property (copy, nonatomic) NSString *recommenderModelVersion;
@property (nonatomic) BOOL hasRecommenderModelVersion;
@property (copy, nonatomic) NSArray *anonymizedRecommendedEntityIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteResolutionState;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (void)deleteForcePromptType;
- (void)deleteRecommenderModelVersion;
- (void)clearAnonymizedRecommendedEntityIdentifier;
- (void)deleteAnonymizedRecommendedEntityIdentifier;
- (void)addAnonymizedRecommendedEntityIdentifier:(id)a0;
- (unsigned long long)anonymizedRecommendedEntityIdentifierCount;
- (id)anonymizedRecommendedEntityIdentifierAtIndex:(unsigned long long)a0;

@end
