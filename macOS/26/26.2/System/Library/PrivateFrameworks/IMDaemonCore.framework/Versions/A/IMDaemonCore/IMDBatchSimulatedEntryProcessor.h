@class NSError;

@interface IMDBatchSimulatedEntryProcessor : NSObject {
    void /* unknown type, empty encoding */ entries;
    void /* unknown type, empty encoding */ currentBatch;
    void /* unknown type, empty encoding */ configuration;
}

- (void)runWithCompletion:(void (^)(NSError *))a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEntries:(id)a0 configuration:(id)a1;

@end
