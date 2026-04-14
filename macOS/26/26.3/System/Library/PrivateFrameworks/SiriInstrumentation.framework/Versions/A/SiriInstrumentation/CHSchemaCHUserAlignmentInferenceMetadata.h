@class NSArray, NSString, NSData;

@interface CHSchemaCHUserAlignmentInferenceMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char userAlignmentResult : 1; unsigned char confidenceScore : 1; } _has;
}

@property (nonatomic) int userAlignmentResult;
@property (nonatomic) BOOL hasUserAlignmentResult;
@property (nonatomic) int confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
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
- (void)deleteConfidenceScore;
- (void)deleteIssueCategory;
- (void)deleteUserAlignmentResult;
- (int)issueCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)issueCategoryCount;

@end
