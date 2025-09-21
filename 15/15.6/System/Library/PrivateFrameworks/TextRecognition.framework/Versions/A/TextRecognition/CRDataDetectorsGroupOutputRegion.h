@interface CRDataDetectorsGroupOutputRegion : CRCompositeOutputRegion

@property (readonly, nonatomic) unsigned long long groupType;

- (id)debugDescription;
- (unsigned long long)type;
- (char)computesBoundsFromChildren;
- (char)computesTranscriptFromChildren;
- (id)dataDetectorsOutputRegions;
- (id)initWithDDRegions:(id)a0 children:(id)a1 groupType:(unsigned long long)a2;

@end
