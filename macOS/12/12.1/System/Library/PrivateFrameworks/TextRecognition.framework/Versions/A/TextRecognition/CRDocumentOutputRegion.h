@class CRDocumentOutputRegionMetadata, CRTextDetectorResults, CROutputRegion;

@interface CRDocumentOutputRegion : CROutputRegion <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) CROutputRegion *title;
@property (retain) CRTextDetectorResults *detectorResults;
@property unsigned long long documentRevision;
@property (retain) CRDocumentOutputRegionMetadata *additionalMetadata;

+ (id)documentWithRegions:(id)a0 title:(id)a1 confidence:(int)a2 imageSize:(struct CGSize { double x0; double x1; })a3;
+ (id)documentWithLines:(id)a0 title:(id)a1 confidence:(int)a2 imageSize:(struct CGSize { double x0; double x1; })a3;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)shouldReprocessDocument;
- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)outputRegionWithContentsOfQuad:(id)a0;
- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_shouldReprocessRev1;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2;
- (void)collectMetadataFromResults:(id)a0;

@end
