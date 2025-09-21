@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SPKCalculatorQuery : SPKQuery {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSArray *results;

+ (void)initialize;
+ (void)cacheSeparators;
+ (void)enableCalculator:(char)a0;
+ (void)enableConversion:(char)a0;
+ (char)isQuerySupported:(unsigned long long)a0;
+ (unsigned int)searchDomain;

- (void).cxx_destruct;
- (void)start;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (char)isCalculatorQuery;

@end
