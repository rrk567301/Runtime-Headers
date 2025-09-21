@class NSString, NSMutableArray;

@interface FPXSearchEnumeratorObserver : NSObject <FPXSearchEnumeratorObserver> {
    NSMutableArray *_resultsBuffer;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) long long maximumNumberOfResultsPerPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishEnumeratingUpToPage:(id)a0;
- (void).cxx_destruct;
- (void)finishEnumeratingWithError:(id)a0;
- (void)didEnumerateSearchResults:(id)a0;
- (id)initWithMaximumNumberOfResultsPerPage:(long long)a0 completionHandler:(id /* block */)a1;

@end
