@class NSString, NSError, SISchemaAnyEvent;

@interface SiriAnalyticsDirectUploadTopic : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (id)init;
- (void).cxx_destruct;
- (void)append:(SISchemaAnyEvent *)a0 topic:(NSString *)a1 completionHandler:(void (^)(BOOL, NSError *))a2;

@end
