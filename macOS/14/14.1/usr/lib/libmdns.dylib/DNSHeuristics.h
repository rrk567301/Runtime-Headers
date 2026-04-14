@interface DNSHeuristics : NSObject

+ (BOOL)updateHeuristicState:(BOOL)a0 isTimeout:(BOOL)a1;
+ (id)copyEmptyHeuristicState;
+ (BOOL)countersExceedThreshold:(unsigned long long)a0 burstCounter:(unsigned long long)a1;
+ (unsigned long long)currentTimeMs;
+ (BOOL)reportResolutionFailure:(id)a0 isTimeout:(BOOL)a1;

@end
