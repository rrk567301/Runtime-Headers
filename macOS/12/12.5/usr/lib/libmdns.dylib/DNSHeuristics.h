@interface DNSHeuristics : NSObject

+ (unsigned long long)currentTimeMs;
+ (BOOL)updateHeuristicState:(BOOL)a0 isTimeout:(BOOL)a1;
+ (BOOL)countersExceedThreshold:(unsigned long long)a0 burstCounter:(unsigned long long)a1;
+ (id)copyEmptyHeuristicState;
+ (BOOL)reportResolutionFailure:(id)a0 isTimeout:(BOOL)a1;

@end
