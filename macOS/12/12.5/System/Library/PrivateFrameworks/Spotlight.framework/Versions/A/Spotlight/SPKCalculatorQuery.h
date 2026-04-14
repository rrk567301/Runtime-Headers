@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SPKCalculatorQuery : SPKQuery {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSArray *results;

+ (void)initialize;
+ (void)cacheSeparators;
+ (void)enableConversion:(BOOL)a0;
+ (void)enableCalculator:(BOOL)a0;
+ (BOOL)isQuerySupported:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)start;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (BOOL)isCalculatorQuery;

@end
