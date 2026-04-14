@class NSArray, FindVideoIntent, FindVideoIntentResponse;

@interface SiriVideoIntents.FindVideoIntentHandler : NSObject <FindVideoIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolveContentForFindVideo:(FindVideoIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)confirmFindVideo:(FindVideoIntent *)a0 completion:(void (^)(FindVideoIntentResponse *))a1;
- (void)handleFindVideo:(FindVideoIntent *)a0 completion:(void (^)(FindVideoIntentResponse *))a1;

@end
