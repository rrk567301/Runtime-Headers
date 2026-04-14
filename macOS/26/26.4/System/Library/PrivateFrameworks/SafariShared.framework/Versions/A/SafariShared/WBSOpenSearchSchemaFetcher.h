@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject {
    NSMutableSet *_openSearchDescriptionURLs;
}

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)a0;
- (void)_fetchOpenSearchDescriptionWithURL:(id)a0 searchHelperProxyObject:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchOpenSearchDescriptionWithURL:(id)a0;
- (void)test_fetchOpenSearchDescriptionWithURL:(id)a0 searchHelperProxyObject:(id)a1 completionHandler:(id /* block */)a2;

@end
