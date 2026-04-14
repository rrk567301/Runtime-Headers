@class NSString, NPWaldo, NSDate;

@interface NPEdgeSelection : EdgeSelection

@property (retain) NSString *bestEdge;
@property unsigned long long bestEdgeRTT;
@property unsigned long long bestEdgeProbedRTT;
@property (retain) NSString *nextBestEdge;
@property unsigned long long nextBestEdgeRTT;
@property (retain) NSDate *probeDate;
@property (weak, nonatomic) NPWaldo *waldoInfo;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWaldo:(id)a0 signature:(id)a1 interfaceType:(id)a2;
- (void)getBestEdgeFromEdgeSelection;
- (void)trainEdgeSelection:(id)a0 edgeRank:(unsigned long long)a1 rtt:(unsigned long long)a2;
- (BOOL)shouldProbeForEdgeSelection:(id)a0 edgeRank:(long long *)a1 edgeIndex:(long long *)a2 bestEdgeLabel:(id *)a3;
- (void)updateEdgeSelection:(unsigned long long)a0;
- (id)copyEdgeSelectionTelemetry;

@end
