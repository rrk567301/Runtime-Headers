@class NSArray, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSUtteranceUnderstandingReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSArray *topU2IntentsMetadatas;
@property (copy, nonatomic) NSArray *topKGSAIntentsMetadatas;
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
- (void)addTopKGSAIntentsMetadata:(id)a0;
- (void)addTopU2IntentsMetadata:(id)a0;
- (void)clearTopKGSAIntentsMetadata;
- (void)clearTopU2IntentsMetadata;
- (void)deleteLinkId;
- (void)deleteTopKGSAIntentsMetadata;
- (void)deleteTopU2IntentsMetadata;
- (id)suppressMessageUnderConditions;
- (id)topKGSAIntentsMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)topKGSAIntentsMetadataCount;
- (id)topU2IntentsMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)topU2IntentsMetadataCount;

@end
