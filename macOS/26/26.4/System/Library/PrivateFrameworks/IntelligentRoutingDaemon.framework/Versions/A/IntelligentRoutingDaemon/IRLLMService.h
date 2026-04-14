@class NSError, NSString, NSArray;

@interface IRLLMService : NSObject {
    void /* unknown type, empty encoding */ service;
}

- (id)init;
- (void)terminateWithReply:(void (^)(NSError *))a0;
- (void)classifyRoom:(NSString *)a0 accessories:(NSArray *)a1 reply:(void (^)(NSString *, NSError *))a2;

@end
