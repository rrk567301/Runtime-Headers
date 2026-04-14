@class NSDictionary, NSString, _DPPrio3SumVectorParameter;

@interface _DPPrio3SumVectorRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double defaultLocalEpsilon;
@property (readonly, nonatomic) NSDictionary *plistParameters;
@property (readonly, nonatomic) _DPPrio3SumVectorParameter *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)randomizerWithEpsilon:(double)a0 parameters:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addNoiseToData:(id)a0 withLocalEpsilon:(double)a1 withError:(id *)a2;
- (id)dimensionFromMetadata:(id)a0;
- (id)initWithEpsilon:(double)a0 parameters:(id)a1;
- (id)randomizeBitValue:(id)a0 withLocalEpsilon:(double)a1 metadata:(id)a2 error:(id *)a3;
- (id)randomizeBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeVector:(id)a0 withLocalEpsilon:(double)a1 metadata:(id)a2 error:(id *)a3;
- (id)recordWithShardResult:(id)a0 metadata:(id)a1 key:(id)a2;

@end
