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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearChoices;
- (void)addChoices:(id)a0;
- (void)deleteChoices;
- (unsigned long long)choicesCount;
- (id)choicesAtIndex:(unsigned long long)a0;
- (void)deleteStageName;
- (void)deleteIsAligned;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
