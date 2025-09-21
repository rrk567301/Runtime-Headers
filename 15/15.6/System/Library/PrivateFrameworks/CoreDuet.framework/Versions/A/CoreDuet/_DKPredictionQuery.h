@class _DKKnowledgeStorage, NSDate;

@interface _DKPredictionQuery : _DKEventQuery {
    char _isTopNPrediction;
    int _totalSlotsInDay;
    long long _topN;
    double _minLikelihood;
}

@property (nonatomic) int slotDuration;
@property (nonatomic) int minimumDaysOfHistory;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long partitionType;
@property (nonatomic) char useHistoricalHistogram;
@property (retain, nonatomic) NSDate *asOfDate;
@property (retain, nonatomic) _DKKnowledgeStorage *storage;
@property (copy) id /* block */ predictionHandler;

+ (char)supportsSecureCoding;
+ (id)predictionQueryForStream:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2;
+ (id)predictionQueryForStreams:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2;
+ (id)topNPredictionQueryForStream:(id)a0 withPredicate:(id)a1 withTopN:(long long)a2 withMinLikelihood:(double)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)executeUsingCoreDataStorage:(id)a0 error:(id *)a1;
- (id)handleResults:(id)a0 error:(id)a1;

@end
