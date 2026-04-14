@interface _DPSymmetricRAPPORWithOHE : NSObject <_DPPrivacyBudgetAnalysis>

@property (readonly, nonatomic) unsigned int batchSize;
@property (readonly, nonatomic) double localEpsilon;

+ (double)binomialPMFForN:(unsigned int)a0 p:(double)a1 x:(unsigned int)a2 logBinomCoef:(double)a3;
+ (double)logBinomialCoefForN:(unsigned int)a0 x:(unsigned int)a1 prevLogBinomCoef:(double)a2;

- (id)approximateDPBudgetForDelta:(double)a0 error:(id *)a1;
- (id)initWithBatchSize:(unsigned int)a0 localEpsilon:(double)a1 error:(id *)a2;
- (id)renyiDPBudgetsForAlphas:(id)a0 error:(id *)a1;

@end
