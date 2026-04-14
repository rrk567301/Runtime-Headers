@class NSObject;
@protocol OS_dispatch_group;

@interface BRCBarrier : NSObject {
    NSObject<OS_dispatch_group> *_barrierGroup;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)signalAndRetakeBarrier;
- (void)signalBarrier;
- (BOOL)waitForBarrier;
- (BOOL)waitForBarrierWithTimeout:(unsigned long long)a0;

@end
