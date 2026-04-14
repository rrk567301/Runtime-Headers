@class NSArray, NSError;

@interface LinkServices._LNMetadataProviderStreamingClient : NSObject <LNMetadataProviderStreamingClient> {
    void /* unknown type, empty encoding */ callback;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendMetadata:(NSArray *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end
