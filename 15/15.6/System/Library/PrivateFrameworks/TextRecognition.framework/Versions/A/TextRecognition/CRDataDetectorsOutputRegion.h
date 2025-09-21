@class DDScannerResult;

@interface CRDataDetectorsOutputRegion : CROutputRegion {
    unsigned long long _dataType;
    DDScannerResult *_ddResult;
}

@property (readonly) unsigned long long dataType;
@property (readonly) DDScannerResult *ddResult;

+ (id)outputRegionWithDDResult:(id)a0 children:(id)a1 locale:(id)a2;
+ (id)outputRegionWithDataType:(unsigned long long)a0 ddResult:(id)a1 children:(id)a2 locale:(id)a3;

- (id)debugDescription;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (char)computesBoundsFromChildren;
- (char)computesTranscriptFromChildren;
- (char)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;

@end
