@class NSString, NSLock;

@interface _ReachabilityRequest : NSObject {
    NSLock *_lock;
    struct __SCNetworkReachability { } *_reachability;
    unsigned int _flags;
    struct __CFDictionary { } *_observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

@property (readonly, nonatomic) NSString *hostname;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)reachabilityChangedWithFlags:(unsigned int)a0;
- (id)initWithHostname:(id)a0;
- (id)description;
- (void)addObserver:(id)a0 selector:(SEL)a1;
- (BOOL)hasObservers;

@end
