@class NSString, NSData;

@interface PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; } _has;
}

@property (copy, nonatomic) NSString *phonemes;
@property (nonatomic) char hasPhonemes;
@property (nonatomic) int source;
@property (nonatomic) char hasSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePhonemes;
- (void)deleteSource;
- (id)suppressMessageUnderConditions;

@end
