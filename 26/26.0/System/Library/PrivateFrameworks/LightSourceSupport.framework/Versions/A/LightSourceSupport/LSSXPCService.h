@class NSMutableSet, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, LSSSubscriptionProvider;

@interface LSSXPCService : NSObject {
    NSObject<OS_xpc_object> *_service;
    NSMutableSet *_listeners;
    NSObject<OS_xpc_object> *_message;
    struct { double time; double intensity; void /* unknown type, empty encoding */ direction; struct { void /* unknown type, empty encoding */ vector; } referenceOrientation; BOOL expectPause; } _lastSent;
    NSObject<OS_dispatch_queue> *_queue;
    id<LSSSubscriptionProvider> _subscriber;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
