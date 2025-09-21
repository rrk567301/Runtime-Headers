@class NSString;

@interface UsageMO : UniqueMO <UniqueMoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accumulator;
+ (BOOL)verifyConstraints:(id)a0 withError:(id *)a1;
+ (id)jumpBackOneSpan;
+ (id)aggregateAs;
+ (id)aggregateName;
+ (id)binnedValue:(long long)a0 inEdges:(id)a1 withLowerEdgeIncluded:(BOOL)a2;
+ (long long)checkForInvalid:(long long)a0 constraint:(id)a1 on:(id)a2;
+ (id)constraintsWithBss:(id)a0 date:(id)a1 lqm:(id)a2 onEntity:(id)a3;
+ (id)datedProperty;
+ (id)referenceDateFor:(unsigned long long)a0 timeSpan:(unsigned long long)a1 withError:(id *)a2;
+ (unsigned long long)timeSpan;
+ (id)usageOf:(id)a0 timeSpan:(unsigned long long)a1 around:(id)a2 onContainer:(id)a3 withError:(id *)a4;


@end
