@class NSString, CROutputRegion, NSArray, CRDocumentOutputRegionMetadata, CRTextDetectorResults;

@interface CRDocumentOutputRegion : CROutputRegion <NSSecureCoding, CROutputRegionLayoutContributing>

@property (class, readonly) char supportsSecureCoding;

@property (retain) CROutputRegion *title;
@property (retain) CRTextDetectorResults *detectorResults;
@property (retain) NSString *imagePath;
@property unsigned long long documentRevision;
@property (retain) CRDocumentOutputRegionMetadata *additionalMetadata;
@property (retain) NSArray *cachedLayoutComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)documentWithRegions:(id)a0 title:(id)a1 confidence:(unsigned long long)a2 imageSize:(struct CGSize { double x0; double x1; })a3;
+ (id)documentWithLines:(id)a0 title:(id)a1 confidence:(unsigned long long)a2 imageSize:(struct CGSize { double x0; double x1; })a3;
+ (id)groupedParagraphBlocksFromParagraphs:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setChildren:(id)a0;
- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)shouldReprocessDocument;
- (id)writeToFileInFolder:(id)a0 basename:(id)a1;
- (id)layoutComponents;
- (id)outputRegionWithContentsOfQuad:(id)a0;
- (void)collectMetadataForNumFilteredRegions:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)crCodableDataRepresentation;
- (id)detectedFieldRegionsExcludingFields:(id)a0 updateExcludedFields:(char)a1;
- (id)fieldRegionsExcludingAnnotatedFields:(id)a0 updateContentTypeOfAnnotatedFields:(char)a1;
- (unsigned long long)formness;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)proposedFieldForPoint:(struct CGPoint { double x0; double x1; })a0 annotatedFields:(id)a1;
- (id)proposedFieldForPoint:(struct CGPoint { double x0; double x1; })a0 existingFields:(id)a1;
- (id)trackingDocumentWithTrackedType:(unsigned long long)a0 includeLines:(char)a1;

@end
