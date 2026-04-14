@class NSString, SIRINLUEXTERNALNLU_ROUTERNLRoutingGenAIMetadata;

@interface SIRINLUEXTERNALNLU_ROUTERTurnSummary : PBCodable <NSCopying> {
    struct { unsigned char executionSource : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExecutedQuery;
@property (retain, nonatomic) NSString *executedQuery;
@property (readonly, nonatomic) BOOL hasResponseText;
@property (retain, nonatomic) NSString *responseText;
@property (nonatomic) BOOL hasExecutionSource;
@property (nonatomic) int executionSource;
@property (readonly, nonatomic) BOOL hasGenAiMetadata;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERNLRoutingGenAIMetadata *genAiMetadata;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsExecutionSource:(id)a0;
- (id)executionSourceAsString:(int)a0;

@end
