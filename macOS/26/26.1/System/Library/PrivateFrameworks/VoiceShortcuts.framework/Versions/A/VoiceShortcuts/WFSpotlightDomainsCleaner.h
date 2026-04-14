@interface WFSpotlightDomainsCleaner : NSObject {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ index;
}

@property (class, nonatomic, readonly) WFSpotlightDomainsCleaner *shared;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
