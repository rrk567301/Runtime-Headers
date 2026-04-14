@class QDSchemaQDToolDefinition, NSString, NSData, SISchemaUUID, QDSchemaQDToolSource;

@interface QDSchemaQDRetrievedTool : SISchemaInstrumentationMessage {
    struct { unsigned char subType : 1; unsigned char similarityScore : 1; unsigned char selectionCriteria : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionScopedUniqueId;
@property (nonatomic) BOOL hasSessionScopedUniqueId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (nonatomic) int subType;
@property (nonatomic) BOOL hasSubType;
@property (nonatomic) float similarityScore;
@property (nonatomic) BOOL hasSimilarityScore;
@property (nonatomic) int selectionCriteria;
@property (nonatomic) BOOL hasSelectionCriteria;
@property (retain, nonatomic) QDSchemaQDToolSource *toolSource;
@property (nonatomic) BOOL hasToolSource;
@property (retain, nonatomic) QDSchemaQDToolDefinition *toolDefinition;
@property (nonatomic) BOOL hasToolDefinition;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteSelectionCriteria;
- (void)deleteSessionScopedUniqueId;
- (void)deleteSimilarityScore;
- (void)deleteSubType;
- (void)deleteToolDefinition;
- (void)deleteToolId;
- (void)deleteToolSource;

@end
