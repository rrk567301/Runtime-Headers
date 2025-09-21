@class NSData;

@interface DODMLASRSchemaDODMLASREntityScore : SISchemaInstrumentationMessage {
    struct { unsigned char entityTaggerCategory : 1; unsigned char numTotalEntities : 1; unsigned char numEntityErrors : 1; } _has;
}

@property (nonatomic) int entityTaggerCategory;
@property (nonatomic) char hasEntityTaggerCategory;
@property (nonatomic) unsigned int numTotalEntities;
@property (nonatomic) char hasNumTotalEntities;
@property (nonatomic) unsigned int numEntityErrors;
@property (nonatomic) char hasNumEntityErrors;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityTaggerCategory;
- (void)deleteNumEntityErrors;
- (void)deleteNumTotalEntities;
- (id)suppressMessageUnderConditions;

@end
