@class NSMutableSet, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, LSSSubscriptionProvider;

@interface LSSXPCService : NSObject {
    NSObject<OS_xpc_object> *_service;
    NSMutableSet *_listeners;
    NSObject<OS_xpc_object> *_message;
    struct { double time; void /* unknown type, empty encoding */ direction; struct { void /* unknown type, empty encoding */ vector; } referenceOrientation; float intensity; unsigned int activityLevel; } _lastSent;
    NSObject<OS_dispatch_queue> *_queue;
    id<LSSSubscriptionProvider> _subscriber;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
