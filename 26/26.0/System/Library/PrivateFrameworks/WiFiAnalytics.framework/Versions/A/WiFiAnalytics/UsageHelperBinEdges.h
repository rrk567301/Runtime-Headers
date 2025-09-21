@interface UsageHelperBinEdges : NSObject

@property (retain) id lowerEdge;
@property (retain) id upperEdge;
@property BOOL lowerEdgeIncluded;

+ (id)binEdgesWithLowerEdgeIncluded:(BOOL)a0;

- (id)description;
- (void).cxx_destruct;
- (void)setGreaterThan:(id)a0;
- (id)greaterOrEqualTo;
- (id)greaterThan;
- (id)initWithLowerEdgeIncluded:(BOOL)a0;
- (id)lowerOrEqualTo;
- (id)lowerThan;
- (void)setGreaterOrEqualTo:(id)a0;
- (void)setLowerOrEqualTo:(id)a0;
- (void)setLowerThan:(id)a0;

@end
