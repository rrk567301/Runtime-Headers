@class BKSEventDeferringChainIdentity, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeliveryChainObserver : NSObject {
    BKSEventDeferringChainIdentity *_chainIdentity;
}

@property (readonly, nonatomic) BKSEventDeferringChainIdentity *chainIdentity;
@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;

- (id)init;
- (void).cxx_destruct;
- (id)addChainObserver:(id)a0;
- (id)initWithDisplay:(id)a0 environment:(id)a1;

@end
