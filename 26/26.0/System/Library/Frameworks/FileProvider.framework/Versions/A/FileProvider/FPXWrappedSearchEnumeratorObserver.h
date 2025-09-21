@class NSString;
@protocol NSFileProviderSearchEnumerationObserver;

@interface FPXWrappedSearchEnumeratorObserver : NSObject <NSFileProviderSearchEnumerationObserver> {
    id<NSFileProviderSearchEnumerationObserver> _target;
    NSString *_providerIdentifier;
    NSString *_domainIdentifier;
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
- (id)initWithTarget:(id)a0 providerID:(id)a1 domainIdentifier:(id)a2 maximumNumberOfResultsPerPage:(long long)a3;

@end
