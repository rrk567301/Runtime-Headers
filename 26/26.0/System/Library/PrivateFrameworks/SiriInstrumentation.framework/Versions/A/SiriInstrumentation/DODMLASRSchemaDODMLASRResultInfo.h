@class NSString, NSArray, NSData;

@interface DODMLASRSchemaDODMLASRResultInfo : SISchemaInstrumentationMessage {
    struct { unsigned char isAligned : 1; } _has;
}

@property (copy, nonatomic) NSString *stageName;
@property (nonatomic) BOOL hasStageName;
@property (nonatomic) BOOL isAligned;
@property (nonatomic) BOOL hasIsAligned;
@property (copy, nonatomic) NSArray *choices;
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
- (void)deleteIsAligned;
- (id)choicesAtIndex:(unsigned long long)a0;
- (void)deleteStageName;
- (void)addChoices:(id)a0;
- (unsigned long long)choicesCount;
- (void)clearChoices;
- (void)deleteChoices;

@end
