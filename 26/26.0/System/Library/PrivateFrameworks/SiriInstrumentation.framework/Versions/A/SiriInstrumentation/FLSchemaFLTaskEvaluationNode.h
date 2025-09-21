@class NSArray, NSData;

@interface FLSchemaFLTaskEvaluationNode : SISchemaInstrumentationMessage {
    struct { unsigned char evaluator : 1; unsigned char result : 1; } _has;
}

@property (nonatomic) int evaluator;
@property (nonatomic) BOOL hasEvaluator;
@property (nonatomic) int result;
@property (nonatomic) BOOL hasResult;
@property (copy, nonatomic) NSArray *sources;
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
- (void)clearSources;
- (unsigned long long)sourcesCount;
- (int)sourcesAtIndex:(unsigned long long)a0;
- (void)addSources:(int)a0;
- (void)deleteEvaluator;
- (void)deleteResult;
- (void)deleteSources;

@end
