@class NSArray, USOSchemaUSONodeDataTier1, NSData;

@interface USOSchemaUSOGraphNodeDataTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSONodeDataTier1 *linkedUsoNodeData;
@property (nonatomic) BOOL hasLinkedUsoNodeData;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers;
@property (copy, nonatomic) NSArray *linkedUsoEntitySpans;
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
- (void)clearLinkedUsoEntityIdentifiers;
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (void)addLinkedUsoEntityIdentifiers:(id)a0;
- (void)addLinkedUsoEntitySpans:(id)a0;
- (void)clearLinkedUsoEntitySpans;
- (void)deleteLinkedUsoEntityIdentifiers;
- (void)deleteLinkedUsoEntitySpans;
- (void)deleteLinkedUsoNodeData;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)a0;
- (id)linkedUsoEntitySpansAtIndex:(unsigned long long)a0;
- (unsigned long long)linkedUsoEntitySpansCount;

@end
