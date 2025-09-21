@class NSMutableArray;

@interface ATXMagicalMomentsPredictionTable : NSObject <NSSecureCoding> {
    NSMutableArray *_predictionTableEntries;
}

@property (class, readonly) char supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredictionTableEntries:(id)a0;
- (void)addPrediction:(id)a0 withApplicablePredicates:(id)a1;
- (void)addPredictions:(id)a0 withApplicablePredicates:(id)a1;
- (id)deduplicatePredictions:(id)a0;
- (id)describeTable;
- (id)predictionTableEntries;
- (id)predictionsForTriggerEvent:(id)a0;
- (id)removeRestrictedPredictions:(id)a0;
- (id)validPredictionsFromTableEntries:(id)a0 event:(id)a1;

@end
