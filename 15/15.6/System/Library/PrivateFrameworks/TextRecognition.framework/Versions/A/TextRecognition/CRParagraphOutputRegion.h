@class NSArray, NSString, CRNormalizedQuad;

@interface CRParagraphOutputRegion : CRCompositeOutputRegion <CRGrouping, CROutputRegionLayoutContributing>

@property (retain) CRNormalizedQuad *topBottomEdgesQuad;
@property char useLineSeparatorAsJoiningDelimiter;
@property (readonly) NSArray *subregions;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paragraphWithLines:(id)a0 confidence:(unsigned long long)a1 baselineAngle:(double)a2;
+ (id)paragraphsWithLines:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)textAlignment;
- (id)layoutComponents;
- (void)_computeGeometryInfo;
- (char)computesNumberOfLinesFromChildren;
- (char)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)joiningDelimiter;
- (id)regionsSuitableForDataDetectorOutput;

@end
