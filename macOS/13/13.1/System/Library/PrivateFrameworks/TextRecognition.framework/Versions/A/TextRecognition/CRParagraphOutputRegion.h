@class NSString;

@interface CRParagraphOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>

@property BOOL useLineSeparatorAsJoiningDelimiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paragraphsWithLines:(id)a0;
+ (id)paragraphWithLines:(id)a0 confidence:(int)a1 baselineAngle:(double)a2;

- (unsigned long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2;
- (id)layoutComponents;
- (id)joiningDelimiter;
- (id)regionsSuitableForDataDetectorOutput;

@end
