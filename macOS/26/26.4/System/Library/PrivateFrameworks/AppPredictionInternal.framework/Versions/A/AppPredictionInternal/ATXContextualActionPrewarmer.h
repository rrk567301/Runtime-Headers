@class NSArray, NSError, ATXOnScreenSelectedContent;

@interface ATXContextualActionPrewarmer : NSObject {
    void /* unknown type, empty encoding */ prewarmerTask;
    void /* unknown type, empty encoding */ toolKitSession;
    void /* unknown type, empty encoding */ serialQueue;
}

@property (class, nonatomic, readonly) ATXContextualActionPrewarmer *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)clearPrewarmedContent;
- (void)fetchPrewarmedEncodedToolInvocationsWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (void)prewarmToolInvocationsForOnScreenSelectedContent:(ATXOnScreenSelectedContent *)a0 completionHandler:(void (^)(void))a1;

@end
