@class NSString, NSData;

@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage {
    struct { unsigned char pommesConfidenceScore : 1; unsigned char isFromResponseCache : 1; unsigned char pegasusPromptType : 1; unsigned char isLowConfidenceKnowledgeResult : 1; } _has;
}

@property (nonatomic) double pommesConfidenceScore;
@property (nonatomic) char hasPommesConfidenceScore;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) char hasPegasusDomain;
@property (nonatomic) char isFromResponseCache;
@property (nonatomic) char hasIsFromResponseCache;
@property (nonatomic) int pegasusPromptType;
@property (nonatomic) char hasPegasusPromptType;
@property (nonatomic) char isLowConfidenceKnowledgeResult;
@property (nonatomic) char hasIsLowConfidenceKnowledgeResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsFromResponseCache;
- (void)deleteIsLowConfidenceKnowledgeResult;
- (void)deletePegasusDomain;
- (void)deletePegasusPromptType;
- (void)deletePommesConfidenceScore;
- (id)suppressMessageUnderConditions;

@end
