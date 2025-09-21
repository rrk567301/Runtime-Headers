@class NSArray, SISchemaVersion, SISchemaUUID, NSData;

@interface USOSchemaUSOGraph : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVersion *version;
@property (nonatomic) char hasVersion;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) NSArray *edges;
@property (copy, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSArray *alignments;
@property (copy, nonatomic) NSArray *spans;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearIdentifiers;
- (void)clearSpans;
- (unsigned long long)identifiersCount;
- (id)initWithJSON:(id)a0;
- (unsigned long long)spansCount;
- (unsigned long long)alignmentsCount;
- (void)addIdentifiers:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearAlignments;
- (void)addAlignments:(id)a0;
- (void)addEdges:(id)a0;
- (void)addNodes:(id)a0;
- (void)addSpans:(id)a0;
- (id)alignmentsAtIndex:(unsigned long long)a0;
- (void)clearEdges;
- (void)clearNodes;
- (void)deleteAlignments;
- (void)deleteEdges;
- (void)deleteIdentifiers;
- (void)deleteLinkId;
- (void)deleteNodes;
- (void)deleteSpans;
- (void)deleteVersion;
- (id)edgesAtIndex:(unsigned long long)a0;
- (unsigned long long)edgesCount;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (id)nodesAtIndex:(unsigned long long)a0;
- (unsigned long long)nodesCount;
- (id)spansAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
