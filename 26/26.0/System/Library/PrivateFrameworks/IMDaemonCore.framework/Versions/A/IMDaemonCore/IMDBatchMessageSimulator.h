@class NSError;

@interface IMDBatchMessageSimulator : NSObject {
    void /* unknown type, empty encoding */ messages;
    void /* unknown type, empty encoding */ batch;
}

- (void)runWithCompletion:(void (^)(NSError *))a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMessages:(id)a0 configuration:(id)a1;

@end
