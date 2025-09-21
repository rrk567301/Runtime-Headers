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

- (id)init;
- (void)reset;
- (id)initWithFillRate:(double)a0 capacity:(double)a1;
- (id)initWithFillRate:(double)a0 capacity:(double)a1 initialAllocation:(double)a2;
- (char)operationAllowed;
- (double)timeIntervalUntilOperationAllowed;
- (char)_consumeTokens:(unsigned long long)a0;
- (void)_replenishTokens;
- (unsigned long long)countOfOperationsAllowed;
- (unsigned long long)countOfOperationsAllowedWithCost:(double)a0;
- (id)dumpStatistics;
- (char)operationAllowedWithCost:(double)a0;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)a0;

@end
