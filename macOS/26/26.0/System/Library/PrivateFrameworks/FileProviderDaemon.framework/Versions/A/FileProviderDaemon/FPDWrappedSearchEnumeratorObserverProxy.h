@class NSString;
@protocol NSFileProviderSearchEnumerationObserver;

@interface FPDWrappedSearchEnumeratorObserverProxy : NSObject <FPXSearchEnumeratorObserver> {
    id<NSFileProviderSearchEnumerationObserver> _target;
}

@property (nonatomic) long long maximumNumberOfResultsPerPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishEnumeratingUpToPage:(id)a0;
- (void).cxx_destruct;
- (void)finishEnumeratingWithError:(id)a0;
- (void)didEnumerateSearchResults:(id)a0;
- (id)initWithTarget:(id)a0 maximumNumberOfResultsPerPage:(long long)a1;

@end
