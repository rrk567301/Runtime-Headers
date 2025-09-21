@class NSString, DDScannerResult, NSArray;

@interface CRDataDetectorsOutputRegion : CROutputRegion

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BOOL computesBoundsFromChildren;
@property (nonatomic) BOOL shouldComputeTranscriptFromChildren;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) BOOL contributesToDocumentHierarchy;
@property (nonatomic) unsigned long long dataType;
@property (retain, nonatomic) DDScannerResult *ddResult;
@property (retain, nonatomic) NSString *originalString;
@property (retain, nonatomic) NSString *ddFriendlyString;
@property (retain, nonatomic) NSArray *matchToOriginalIndexMapping;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithDataDetectorsResult:(id)a0 children:(id)a1 locale:(id)a2 originalString:(id)a3 ddFriendlyString:(id)a4 matchToOriginalIndexMapping:(id)a5;
- (id)initWithDataType:(unsigned long long)a0 ddResult:(id)a1 children:(id)a2 locale:(id)a3;

@end
