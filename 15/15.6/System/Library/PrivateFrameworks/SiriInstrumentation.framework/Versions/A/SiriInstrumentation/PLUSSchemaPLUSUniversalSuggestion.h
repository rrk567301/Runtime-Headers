@class NSData;

@interface PLUSSchemaPLUSUniversalSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char confidence : 1; } _has;
}

@property (nonatomic) double confidence;
@property (nonatomic) char hasConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidence;
- (id)suppressMessageUnderConditions;

@end
