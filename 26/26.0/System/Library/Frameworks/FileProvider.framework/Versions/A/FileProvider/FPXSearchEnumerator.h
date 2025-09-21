@class NSString, FPXDomainContext, NSObject;
@protocol NSFileProviderSearchEnumerator, OS_dispatch_queue;

@interface FPXSearchEnumerator : NSObject <FPXSearchEnumerator> {
    FPXDomainContext *_domainContext;
    id<NSFileProviderSearchEnumerator> _vendorEnumerator;
    NSObject<OS_dispatch_queue> *_queue;
    long long _maximumNumberOfResultsPerPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)invalidateVendorEnumeration;
- (void).cxx_destruct;
- (void)_invalidateSync;
- (void)enumerateSearchResultsForObserver:(id)a0 startingAtPage:(id)a1;
- (id)initWithDomainContext:(id)a0 vendorEnumerator:(id)a1 queue:(id)a2 maximumNumberOfResultsPerPage:(long long)a3;

@end
