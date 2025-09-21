@class NSArray, BKHIDEventDeliveryObserverService;

@interface _BKEventObserverConnectionRecord : NSObject {
    BOOL _observingLocalPolicy;
    BOOL _entitledToObserveFullDeliveryChain;
    int _pid;
    BKHIDEventDeliveryObserverService *_observerService;
    NSArray *_observingChainIdentities;
    NSArray *_alreadySeenDeliveryChains;
}

- (void).cxx_destruct;

@end
