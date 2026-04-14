@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject {
    NSMutableSet *_openSearchDescriptionURLs;
}

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (void)fetchOpenSearchDescriptionWithURL:(id)a0;
- (void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)a0;

@end
