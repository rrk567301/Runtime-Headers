@class NSString, NSError, SISchemaAnyEvent;

@interface SiriAnalyticsFBFStorage : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0 telemetry:(id)a1;
- (void)store:(SISchemaAnyEvent *)a0 topic:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (id)init;

@end
