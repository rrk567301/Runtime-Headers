@class NSMutableSet, NSObject;
@protocol OS_dispatch_source;

@interface TRIDebounceSubscriptionsGuardedData : NSObject {
    NSObject<OS_dispatch_source> *debounceTimer;
    NSMutableSet *queuedSubscriptions;
}

- (void).cxx_destruct;

@end
