@class NSString, NSArray, LRSchemaLRDataClassificationMetadata, NSData;

@interface LRSchemaLRDataClassificationManifest : SISchemaInstrumentationMessage {
    struct { unsigned char isRedacted : 1; } _has;
}

@property (copy, nonatomic) NSString *classifiedString;
@property (nonatomic) BOOL hasClassifiedString;
@property (retain, nonatomic) LRSchemaLRDataClassificationMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (copy, nonatomic) NSArray *explainabilityIdentifiers;
@property (nonatomic) BOOL isRedacted;
@property (nonatomic) BOOL hasIsRedacted;
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
- (void)deleteExplainabilityIdentifiers;
- (void)addExplainabilityIdentifiers:(id)a0;
- (void)clearExplainabilityIdentifiers;
- (void)deleteClassifiedString;
- (void)deleteIsRedacted;
- (void)deleteMetadata;
- (id)explainabilityIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)explainabilityIdentifiersCount;

@end
