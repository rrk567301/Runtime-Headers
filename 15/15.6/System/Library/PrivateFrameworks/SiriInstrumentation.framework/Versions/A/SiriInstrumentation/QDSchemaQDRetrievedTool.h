@class QDSchemaQDToolDefinition, NSString, NSData, SISchemaUUID, QDSchemaQDToolSource;

@interface QDSchemaQDRetrievedTool : SISchemaInstrumentationMessage {
    struct { unsigned char subType : 1; unsigned char similarityScore : 1; unsigned char selectionCriteria : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionScopedUniqueId;
@property (nonatomic) char hasSessionScopedUniqueId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) char hasToolId;
@property (nonatomic) int subType;
@property (nonatomic) char hasSubType;
@property (nonatomic) float similarityScore;
@property (nonatomic) char hasSimilarityScore;
@property (nonatomic) int selectionCriteria;
@property (nonatomic) char hasSelectionCriteria;
@property (retain, nonatomic) QDSchemaQDToolSource *toolSource;
@property (nonatomic) char hasToolSource;
@property (retain, nonatomic) QDSchemaQDToolDefinition *toolDefinition;
@property (nonatomic) char hasToolDefinition;
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
- (void)deleteSelectionCriteria;
- (void)deleteSessionScopedUniqueId;
- (void)deleteSimilarityScore;
- (void)deleteSubType;
- (void)deleteToolDefinition;
- (void)deleteToolId;
- (void)deleteToolSource;
- (id)suppressMessageUnderConditions;

@end
