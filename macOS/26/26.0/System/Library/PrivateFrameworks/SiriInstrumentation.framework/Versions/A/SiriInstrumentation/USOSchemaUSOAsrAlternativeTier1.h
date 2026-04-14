@class NSString, NSData;

@interface USOSchemaUSOAsrAlternativeTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char probability : 1; } _has;
}

@property (copy, nonatomic) NSString *alternative;
@property (nonatomic) BOOL hasAlternative;
@property (nonatomic) float probability;
@property (nonatomic) BOOL hasProbability;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAlternative;
- (void)deleteProbability;

@end
