@class NSString;
@protocol FPXSearchEnumerator;

@interface FPDWrappedSearchEnumeratorProxy : NSObject <FPXSearchEnumerator, NSXPCProxyCreating> {
    id<FPXSearchEnumerator> _target;
    long long _maximumNumberOfResultsPerPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)enumerateSearchResultsForObserver:(id)a0 startingAtPage:(id)a1;
- (id)initWithTarget:(id)a0 maximumNumberOfResultsPerPage:(long long)a1;

@end
