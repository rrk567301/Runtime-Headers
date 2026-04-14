@class _TtC18StatusKitAgentCore19SKAMonotonicCounter;

@interface StatusKitAgentCore.SKAMonotonicCounter : NSObject {
    void /* unknown type, empty encoding */ prefsKey;
}

@property (class, nonatomic, readonly) _TtC18StatusKitAgentCore19SKAMonotonicCounter *shared;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)readAndIncrement;

@end
