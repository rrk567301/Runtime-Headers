@class NSArray, NSData, SISchemaUUID;

@interface USOSchemaUSOGraphTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *linkedUsoNodeDatas;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers;
@property (copy, nonatomic) NSArray *linkedUsoGraphNodeDatas;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLinkId;
- (void)clearLinkedUsoEntityIdentifiers;
- (void)addLinkedUsoEntityIdentifiers:(id)a0;
- (void)deleteLinkedUsoNodeData;
- (void)deleteLinkedUsoEntityIdentifiers;
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)a0;
- (void)clearLinkedUsoNodeData;
- (void)clearLinkedUsoGraphNodeData;
- (void)addLinkedUsoNodeData:(id)a0;
- (void)addLinkedUsoGraphNodeData:(id)a0;
- (unsigned long long)linkedUsoNodeDataCount;
- (id)linkedUsoNodeDataAtIndex:(unsigned long long)a0;
- (void)deleteLinkedUsoGraphNodeData;
- (unsigned long long)linkedUsoGraphNodeDataCount;
- (id)linkedUsoGraphNodeDataAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
