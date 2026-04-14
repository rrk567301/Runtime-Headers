@class NSString, NSError, SISchemaAnyEvent;

@interface SiriAnalyticsDirectUploadTopic : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (void).cxx_destruct;
- (id)init;
- (void)append:(SISchemaAnyEvent *)a0 topic:(NSString *)a1 completionHandler:(void (^)(BOOL, NSError *))a2;

@end
