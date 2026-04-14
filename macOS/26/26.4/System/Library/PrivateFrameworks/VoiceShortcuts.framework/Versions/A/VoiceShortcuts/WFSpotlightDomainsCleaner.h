@interface WFSpotlightDomainsCleaner : NSObject {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ daemonTaskScheduler;
}

@property (class, nonatomic, readonly) WFSpotlightDomainsCleaner *shared;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
