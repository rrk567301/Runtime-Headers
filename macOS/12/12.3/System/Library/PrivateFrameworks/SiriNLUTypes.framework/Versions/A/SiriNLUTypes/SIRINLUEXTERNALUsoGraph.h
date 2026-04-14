@class SIRINLUEXTERNALSemVer, NSMutableArray;

@interface SIRINLUEXTERNALUsoGraph : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) SIRINLUEXTERNALSemVer *version;
@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSMutableArray *edges;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *alignments;

+ (Class)identifiersType;
+ (Class)nodesType;
+ (Class)edgesType;
+ (Class)alignmentsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)identifiersCount;
- (void)clearIdentifiers;
- (void)clearNodes;
- (void)clearEdges;
- (void)clearAlignments;
- (void)addNodes:(id)a0;
- (void)addEdges:(id)a0;
- (void)addIdentifiers:(id)a0;
- (void)addAlignments:(id)a0;
- (unsigned long long)nodesCount;
- (id)nodesAtIndex:(unsigned long long)a0;
- (unsigned long long)edgesCount;
- (id)edgesAtIndex:(unsigned long long)a0;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)alignmentsCount;
- (id)alignmentsAtIndex:(unsigned long long)a0;

@end
