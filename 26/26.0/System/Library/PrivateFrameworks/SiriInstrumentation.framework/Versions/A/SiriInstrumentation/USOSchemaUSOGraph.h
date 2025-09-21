@class NSArray, SISchemaVersion, SISchemaUUID, NSData;

@interface USOSchemaUSOGraph : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVersion *version;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) NSArray *edges;
@property (copy, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSArray *alignments;
@property (copy, nonatomic) NSArray *spans;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteVersion;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearIdentifiers;
- (void)clearSpans;
- (unsigned long long)identifiersCount;
- (unsigned long long)spansCount;
- (unsigned long long)alignmentsCount;
- (void)addIdentifiers:(id)a0;
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
- (id)edgesAtIndex:(unsigned long long)a0;
- (unsigned long long)edgesCount;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (id)nodesAtIndex:(unsigned long long)a0;
- (unsigned long long)nodesCount;
- (id)spansAtIndex:(unsigned long long)a0;

@end
