@interface WFSpotlightDomainsCleaner : NSObject {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ index;
}

@property (class, nonatomic, readonly) WFSpotlightDomainsCleaner *shared;

- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;

@end
