@class NSData;

@interface PLUSSchemaPLUSUniversalSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char confidence : 1; } _has;
}

@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteConfidence;

@end
