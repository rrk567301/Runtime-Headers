@class NSObject;
@protocol OS_dispatch_queue;

@interface CUIPlaceholderCUIRuntimeStatistics : NSObject {
    _Atomic long long _wasted_size;
    _Atomic long long _total_size;
    _Atomic long long _shortCircuitImageLookup;
    _Atomic long long _total_lookup;
    _Atomic long long _total_probes;
    _Atomic long long _total_initial_lookups;
    _Atomic long long _missed_lookup;
    NSObject<OS_dispatch_queue> *_queue;
    int _notify_token;
}

+ (void)generateLog;
+ (id)sharedRuntimeStatistics;

- (void)addStatisticAllocatedImageSize:(unsigned long long)a0 roundedSize:(unsigned long long)a1;
- (void)incrementStatisticDidShortCircuitImageLookup;
- (void)incrementStaticsProbe;
- (long long)shortCircuitImageLookup;
- (void)incrementStaticsInitialLookup;
- (id)init;
- (void)incrementStatisticLookup;
- (void)dealloc;
- (void)incrementMissedLookup;

@end
