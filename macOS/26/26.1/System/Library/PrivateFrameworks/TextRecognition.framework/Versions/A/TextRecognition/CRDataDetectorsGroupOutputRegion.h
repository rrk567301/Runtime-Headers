@interface CRDataDetectorsGroupOutputRegion : CRCompositeOutputRegion

@property (readonly, nonatomic) unsigned long long groupType;

- (unsigned long long)type;
- (id)debugDescription;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;
- (id)dataDetectorsOutputRegions;
- (id)initWithDDRegions:(id)a0 children:(id)a1 groupType:(unsigned long long)a2;

@end
