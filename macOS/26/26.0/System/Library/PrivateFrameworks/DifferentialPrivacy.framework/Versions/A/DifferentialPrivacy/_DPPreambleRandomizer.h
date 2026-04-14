@class NSDictionary, NSString;

@interface _DPPreambleRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double maxCentralEpsilon;
@property (readonly, nonatomic) NSDictionary *plistParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)randomizerWithMaxCentralEpsilon:(double)a0 parameters:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMaxCentralEpsilon:(double)a0 parameter:(id)a1;
- (id)randomizeBitValue:(id)a0 metadata:(id)a1 error:(id *)a2;
- (id)randomizeBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)recordWithShardResult:(id)a0 metadata:(id)a1 key:(id)a2;

@end
