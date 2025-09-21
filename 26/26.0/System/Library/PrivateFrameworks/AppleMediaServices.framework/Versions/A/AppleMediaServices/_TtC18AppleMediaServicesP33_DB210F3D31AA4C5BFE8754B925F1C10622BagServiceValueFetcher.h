@class NSString, NSError;

@interface _TtC18AppleMediaServicesP33_DB210F3D31AA4C5BFE8754B925F1C10622BagServiceValueFetcher : NSObject <AMSBagValueFetching> {
    void /* unknown type, empty encoding */ bagLoader;
    void /* unknown type, empty encoding */ valueFetcher;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) BOOL isLoaded;

- (id)init;
- (void)loadWithCompletion:(void (^)(id, NSError *))a0;
- (void).cxx_destruct;
- (void)processedDefaultValueWithCompletion:(void (^)(id, NSError *))a0;

@end
