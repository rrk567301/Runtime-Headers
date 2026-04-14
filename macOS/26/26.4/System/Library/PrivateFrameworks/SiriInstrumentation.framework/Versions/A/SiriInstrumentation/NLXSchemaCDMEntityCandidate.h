@class NSData, USOSchemaUSOGraph;

@interface NLXSchemaCDMEntityCandidate : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (retain, nonatomic) USOSchemaUSOGraph *entity;
@property (nonatomic) BOOL hasEntity;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntity;
- (void)deleteScore;

@end
