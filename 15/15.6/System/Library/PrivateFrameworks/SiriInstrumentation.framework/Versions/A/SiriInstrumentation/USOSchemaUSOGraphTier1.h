@class NSArray, NSData, SISchemaUUID;

@interface USOSchemaUSOGraphTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSArray *linkedUsoNodeDatas;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers;
@property (copy, nonatomic) NSArray *linkedUsoGraphNodeDatas;
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
- (void)clearLinkedUsoEntityIdentifiers;
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (void)addLinkedUsoEntityIdentifiers:(id)a0;
- (void)addLinkedUsoGraphNodeData:(id)a0;
- (void)addLinkedUsoNodeData:(id)a0;
- (void)clearLinkedUsoGraphNodeData;
- (void)clearLinkedUsoNodeData;
- (void)deleteLinkId;
- (void)deleteLinkedUsoEntityIdentifiers;
- (void)deleteLinkedUsoGraphNodeData;
- (void)deleteLinkedUsoNodeData;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)a0;
- (id)linkedUsoGraphNodeDataAtIndex:(unsigned long long)a0;
- (unsigned long long)linkedUsoGraphNodeDataCount;
- (id)linkedUsoNodeDataAtIndex:(unsigned long long)a0;
- (unsigned long long)linkedUsoNodeDataCount;
- (id)suppressMessageUnderConditions;

@end
