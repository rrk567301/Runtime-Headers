@class NSString, NSData;

@interface USOSchemaUSOAsrAlternativeTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char probability : 1; } _has;
}

@property (copy, nonatomic) NSString *alternative;
@property (nonatomic) char hasAlternative;
@property (nonatomic) float probability;
@property (nonatomic) char hasProbability;
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
- (void)deleteAlternative;
- (void)deleteProbability;
- (id)suppressMessageUnderConditions;

@end
