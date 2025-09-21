@class NSData;

@interface CLPInstSchemaCLPNLv4TaskEvaluationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char accuracyOnTheFirstUserParseCount : 1; unsigned char accuracyOnAnyUserParse : 1; unsigned char evaluationCount : 1; } _has;
}

@property (nonatomic) double accuracyOnTheFirstUserParseCount;
@property (nonatomic) char hasAccuracyOnTheFirstUserParseCount;
@property (nonatomic) double accuracyOnAnyUserParse;
@property (nonatomic) char hasAccuracyOnAnyUserParse;
@property (nonatomic) unsigned int evaluationCount;
@property (nonatomic) char hasEvaluationCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAccuracyOnAnyUserParse;
- (void)deleteAccuracyOnTheFirstUserParseCount;
- (void)deleteEvaluationCount;
- (id)suppressMessageUnderConditions;

@end
