@class NSString, NSObject;
@protocol OS_dispatch_group;

@interface BRCBarrier : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_group> *_barrierGroup;
}

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)signalAndRetakeBarrier;
- (void)signalBarrier;
- (BOOL)waitForBarrier;
- (BOOL)waitForBarrierWithTimeout:(unsigned long long)a0;

@end
