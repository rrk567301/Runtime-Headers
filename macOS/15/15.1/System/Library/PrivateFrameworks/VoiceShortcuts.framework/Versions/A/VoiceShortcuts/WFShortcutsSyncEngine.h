@class NSError;

@interface WFShortcutsSyncEngine : NSObject <WFShortcutsSyncService> {
    void /* unknown type, empty encoding */ engine;
}

- (id)init;
- (void).cxx_destruct;
- (void)forceReceiveAndSendAllChangesWithCompletionHandler:(void (^)(NSError *))a0;
- (id)initWithDatabase:(id)a0 container:(id)a1;

@end
