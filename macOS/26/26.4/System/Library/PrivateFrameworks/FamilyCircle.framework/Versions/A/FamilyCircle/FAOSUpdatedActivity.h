@interface FAOSUpdatedActivity : NSObject {
    void /* unknown type, empty encoding */ scheduler;
}

- (void)unregister;
- (void).cxx_destruct;
- (id)init;
- (void)checkinWithCompletionHandler:(void (^)(void))a0;
- (id)initWithHeartbeatActivityHandler:(id /* block */)a0;

@end
