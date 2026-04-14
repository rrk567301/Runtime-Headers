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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearIdentifiers;
- (unsigned long long)identifiersCount;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkId;
- (void)deleteVersion;
- (void)clearNodes;
- (void)deleteNodes;
- (void)addNodes:(id)a0;
- (unsigned long long)nodesCount;
- (id)nodesAtIndex:(unsigned long long)a0;
- (void)clearEdges;
- (void)deleteEdges;
- (void)addEdges:(id)a0;
- (unsigned long long)edgesCount;
- (id)edgesAtIndex:(unsigned long long)a0;
- (void)deleteIdentifiers;
- (void)addIdentifiers:(id)a0;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (void)clearAlignments;
- (void)deleteAlignments;
- (void)addAlignments:(id)a0;
- (unsigned long long)alignmentsCount;
- (id)alignmentsAtIndex:(unsigned long long)a0;

@end
