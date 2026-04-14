@interface RTTokenBucket : NSObject {
    double _fillRate;
    double _capacity;
    double _operationCost;
    double _tokenBucket;
    double _lastArrivalTime;
    double _totalInterArrivalTime;
    double _wastedTokens;
    double _totalTokensGenerated;
    double _totalTokensConsumed;
    unsigned long long _totalOperations;
    unsigned long long _operationsAllowed;
}

@property (nonatomic) double lastBucketFill;
@property (nonatomic) double interArrivalTime;

- (BOOL)operationAllowed;
- (id)dumpStatistics;
- (void)_replenishTokens;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)a0;
- (unsigned long long)countOfOperationsAllowedWithCost:(double)a0;
- (unsigned long long)countOfOperationsAllowed;
- (id)initWithFillRate:(double)a0 capacity:(double)a1 initialAllocation:(double)a2;
- (void)reset;
- (BOOL)operationAllowedWithCost:(double)a0;
- (double)timeIntervalUntilOperationAllowed;
- (BOOL)_consumeTokens:(unsigned long long)a0;
- (id)initWithFillRate:(double)a0 capacity:(double)a1;
- (id)init;

@end
