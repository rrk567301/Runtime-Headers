@class DDScannerResult;

@interface CRDataDetectorsOutputRegion : CROutputRegion

@property unsigned long long dataType;
@property (retain) DDScannerResult *ddResult;

+ (unsigned long long)dataTypeForDDResult:(id)a0;
+ (id)outputRegionWithDDResult:(id)a0 children:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;

@end
