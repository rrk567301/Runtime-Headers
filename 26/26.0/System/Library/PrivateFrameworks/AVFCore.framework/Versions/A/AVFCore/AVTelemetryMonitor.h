@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVTelemetryMonitor : NSObject {
    struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; } *_allAggregratedCount;
    NSString *_applicationIdentifier;
    NSObject<OS_dispatch_queue> *_queueCAEvents;
    NSObject<OS_dispatch_source> *_timerCAEvents;
    BOOL _timerActivated;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void)incrementBucketCount:(unsigned long long)a0 executionTime:(long long)a1;
- (void)incrementErrorCount:(unsigned long long)a0;
- (void)reportAllAggregatedCounts;

@end
