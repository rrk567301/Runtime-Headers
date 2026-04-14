@interface MTBaseFeedRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void /* unknown type, empty encoding */ storeID;
    void /* unknown type, empty encoding */ showMetadata;
}

- (void).cxx_destruct;
- (id)initWithStoreID:(long long)a0;
- (id)init;
- (void)performWithCompletion:(id /* block */)a0;

@end
