@class NSString, NSMutableDictionary, NSDate;

@interface HMDXPCMessageCountTracker : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_acceptedRequests;
    NSMutableDictionary *_erroredRequests;
    NSMutableDictionary *_sentNotifications;
    NSMutableDictionary *_filteredNotifications;
}

@property (retain, nonatomic) NSDate *lastResetDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)xpcCounterTracker;

- (id)init;
- (void).cxx_destruct;
- (void)_resetCounters;
- (id)__init;
- (id)dumpState;
- (void)submitCounters;
- (id)_countersOfType:(long long)a0;
- (id)countersOfType:(long long)a0;
- (void)incrementCounterOfType:(long long)a0 identifier:(id)a1;
- (void)_incrementCounterOfType:(long long)a0 identifier:(id)a1;
- (id)sampleCountersAndReset:(BOOL)a0;

@end
