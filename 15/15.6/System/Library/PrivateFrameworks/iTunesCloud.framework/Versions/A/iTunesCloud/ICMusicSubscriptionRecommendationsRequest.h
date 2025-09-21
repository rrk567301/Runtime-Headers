@class ICStoreRequestContext, NSArray;

@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    long long _seedItemID;
    char _isLibraryID;
    long long _maxResultCount;
    NSArray *_resultsList;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)a0 seedItemID:(long long)a1 isLibraryID:(char)a2 maxResultCount:(long long)a3;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
