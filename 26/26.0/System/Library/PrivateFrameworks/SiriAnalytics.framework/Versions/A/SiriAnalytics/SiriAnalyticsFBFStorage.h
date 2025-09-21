@class NSString, NSError, SISchemaAnyEvent;

@interface SiriAnalyticsFBFStorage : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (id)initWithApplicationIdentifier:(id)a0 telemetry:(id)a1;
- (id)init;
- (void)store:(SISchemaAnyEvent *)a0 topic:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void).cxx_destruct;

@end
