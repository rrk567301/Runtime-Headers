@class NSArray, NSData;

@interface FLSchemaFLTaskEvaluationNode : SISchemaInstrumentationMessage {
    struct { unsigned char evaluator : 1; unsigned char result : 1; } _has;
}

@property (nonatomic) int evaluator;
@property (nonatomic) char hasEvaluator;
@property (nonatomic) int result;
@property (nonatomic) char hasResult;
@property (copy, nonatomic) NSArray *sources;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSources;
- (id)initWithJSON:(id)a0;
- (unsigned long long)sourcesCount;
- (int)sourcesAtIndex:(unsigned long long)a0;
- (void)addSources:(int)a0;
- (void)deleteEvaluator;
- (void)deleteResult;
- (void)deleteSources;
- (id)suppressMessageUnderConditions;

@end
