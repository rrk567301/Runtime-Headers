@protocol _DKKnowledgeQuerying;

@interface _DKPredictor : NSObject {
    id<_DKKnowledgeQuerying> _knowledgeStore;
}

+ (id)predictorWithKnowledgeStore:(id)a0;
+ (id)deviceActivityLikelihoodQueryPredicate;

- (void).cxx_destruct;
- (id)launchLikelihoodPredictionForApp:(id)a0;
- (id)launchLikelihoodForTopNApplications:(long long)a0 withLikelihoodGreaterThan:(double)a1 withTemporalResolution:(int)a2;
- (id)pluginLikelihood;
- (id)displayOnLikelihood;
- (id)deviceActivityLikelihood;
- (id)predictionForStreamWithName:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2;
- (id)predictionForStreamsWithNames:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2;
- (id)predictionForStreamWithName:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2 asOfDate:(id)a3;
- (id)predictionForStreamWithName:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2 withDataPartitionType:(unsigned long long)a3 asOfDate:(id)a4;
- (id)localInBedPeriod;
- (id)expectedInBedPeriod;

@end
