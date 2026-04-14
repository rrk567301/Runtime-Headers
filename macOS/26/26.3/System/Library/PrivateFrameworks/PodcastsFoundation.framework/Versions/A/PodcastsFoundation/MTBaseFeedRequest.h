@interface MTBaseFeedRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void /* unknown type, empty encoding */ storeID;
    void /* unknown type, empty encoding */ showMetadata;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithStoreID:(long long)a0;
- (void)performWithCompletion:(id /* block */)a0;

@end
