@class NSArray;

@interface _BKEventObserverConnectionRecord : NSObject {
    char _observingLocalPolicy;
    int _pid;
    NSArray *_observingChainIdentities;
    NSArray *_alreadySeenDeliveryChains;
}

- (void).cxx_destruct;

@end
