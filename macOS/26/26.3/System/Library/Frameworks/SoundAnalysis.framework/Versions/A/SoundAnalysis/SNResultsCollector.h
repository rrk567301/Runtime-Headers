@class NSArray;

@interface SNResultsCollector : NSObject <SNResultsObserving> {
    void /* function */ results;
    void /* function */ errors;
}

@property (nonatomic, copy) NSArray *results;
@property (nonatomic, copy) NSArray *errors;
@property (nonatomic) long long completeCount;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void)clearResults;
- (void).cxx_destruct;
- (void)clearErrors;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)clearCompleteCount;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;

@end
