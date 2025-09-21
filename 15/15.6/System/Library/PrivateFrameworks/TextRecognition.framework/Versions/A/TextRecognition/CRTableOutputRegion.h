@class NSArray, NSString;

@interface CRTableOutputRegion : CROutputRegion <CROutputRegionLayoutContributing>

@property (retain, nonatomic) NSArray *rowQuads;
@property (retain, nonatomic) NSArray *colQuads;
@property (readonly) NSArray *cells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)layoutComponents;
- (char)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithCells:(id)a0 quad:(id)a1 rowQuads:(id)a2 colQuads:(id)a3;

@end
