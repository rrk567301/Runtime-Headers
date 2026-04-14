@class BKSHIDEventDeliveryChainObserver, BKSEventDeferringChainIdentity;
@protocol BKSHIDEventDeliveryChainObserving;

@interface _BKChainObserverContainer : NSObject <NSCopying>

@property (retain, nonatomic) id<BKSHIDEventDeliveryChainObserving> observingClient;
@property (retain, nonatomic) BKSHIDEventDeliveryChainObserver *observerInterface;
@property (retain, nonatomic) BKSEventDeferringChainIdentity *requestedChainIdentity;

- (id)copy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
