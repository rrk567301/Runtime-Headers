@class NSArray, NSString, NSData;

@interface CHSchemaCHConversationQualityInferenceMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char conversationQualityComplexity : 1; unsigned char issueDetected : 1; } _has;
}

@property (nonatomic) int conversationQualityComplexity;
@property (nonatomic) BOOL hasConversationQualityComplexity;
@property (nonatomic) BOOL issueDetected;
@property (nonatomic) BOOL hasIssueDetected;
@property (copy, nonatomic) NSArray *issueCategorys;
@property (copy, nonatomic) NSString *rationale;
@property (nonatomic) BOOL hasRationale;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteRationale;
- (void)addIssueCategory:(int)a0;
- (void)clearIssueCategory;
- (void)deleteConversationQualityComplexity;
- (void)deleteIssueCategory;
- (void)deleteIssueDetected;
- (int)issueCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)issueCategoryCount;

@end
