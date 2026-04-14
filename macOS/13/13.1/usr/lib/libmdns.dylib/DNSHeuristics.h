@interface DNSHeuristics : NSObject

+ (BOOL)countersExceedThreshold:(unsigned long long)a0 burstCounter:(unsigned long long)a1;
+ (unsigned long long)currentTimeMs;
+ (id)copyEmptyHeuristicState;
+ (BOOL)updateHeuristicState:(BOOL)a0 isTimeout:(BOOL)a1;
+ (BOOL)reportResolutionFailure:(id)a0 isTimeout:(BOOL)a1;

@end
