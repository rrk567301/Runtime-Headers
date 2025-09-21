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

- (id)initWithFillRate:(double)a0 capacity:(double)a1 initialAllocation:(double)a2;
- (void)_replenishTokens;
- (void)reset;
- (BOOL)_consumeTokens:(unsigned long long)a0;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)a0;
- (unsigned long long)countOfOperationsAllowed;
- (id)init;
- (BOOL)operationAllowed;
- (id)dumpStatistics;
- (id)initWithFillRate:(double)a0 capacity:(double)a1;
- (BOOL)operationAllowedWithCost:(double)a0;
- (double)timeIntervalUntilOperationAllowed;
- (unsigned long long)countOfOperationsAllowedWithCost:(double)a0;

@end
