@class NSError;

@interface IMDBatchSimulatedEntryProcessor : NSObject {
    void /* unknown type, empty encoding */ entries;
    void /* unknown type, empty encoding */ currentBatch;
    void /* unknown type, empty encoding */ configuration;
}

- (void).cxx_destruct;
- (id)init;
- (void)runWithCompletion:(void (^)(NSError *))a0;
- (id)initWithEntries:(id)a0 configuration:(id)a1;

@end
