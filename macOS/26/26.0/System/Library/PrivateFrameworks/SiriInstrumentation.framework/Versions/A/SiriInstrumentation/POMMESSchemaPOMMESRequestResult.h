@class NSString, NSData;

@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage {
    struct { unsigned char pommesConfidenceScore : 1; unsigned char isFromResponseCache : 1; unsigned char pegasusPromptType : 1; unsigned char isLowConfidenceKnowledgeResult : 1; unsigned char isQueryDirectQuestion : 1; } _has;
}

@property (nonatomic) double pommesConfidenceScore;
@property (nonatomic) BOOL hasPommesConfidenceScore;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
@property (nonatomic) BOOL isFromResponseCache;
@property (nonatomic) BOOL hasIsFromResponseCache;
@property (nonatomic) int pegasusPromptType;
@property (nonatomic) BOOL hasPegasusPromptType;
@property (nonatomic) BOOL isLowConfidenceKnowledgeResult;
@property (nonatomic) BOOL hasIsLowConfidenceKnowledgeResult;
@property (nonatomic) BOOL isQueryDirectQuestion;
@property (nonatomic) BOOL hasIsQueryDirectQuestion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIsFromResponseCache;
- (void)deleteIsLowConfidenceKnowledgeResult;
- (void)deleteIsQueryDirectQuestion;
- (void)deletePegasusDomain;
- (void)deletePegasusPromptType;
- (void)deletePommesConfidenceScore;

@end
