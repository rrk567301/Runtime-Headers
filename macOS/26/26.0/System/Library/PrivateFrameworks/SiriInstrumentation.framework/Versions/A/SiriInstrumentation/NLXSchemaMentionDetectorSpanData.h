@class NSData;

@interface NLXSchemaMentionDetectorSpanData : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteScore;

@end
