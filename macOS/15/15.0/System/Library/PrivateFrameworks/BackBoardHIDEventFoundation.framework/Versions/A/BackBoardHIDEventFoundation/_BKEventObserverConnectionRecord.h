@class NSArray;

@interface _BKEventObserverConnectionRecord : NSObject

@property (copy, nonatomic) NSArray *observingChainIdentities;
@property (retain, nonatomic) NSArray *alreadySeenDeliveryChains;
@property (nonatomic) int pid;
@property (nonatomic) BOOL observingLocalPolicy;

- (void).cxx_destruct;

@end
