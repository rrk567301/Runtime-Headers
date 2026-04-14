@class NSString, NSObject;
@protocol OS_dispatch_group;

@interface BRCBarrier : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_group> *_barrierGroup;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (void)dealloc;
- (void)signalAndRetakeBarrier;
- (void)signalBarrier;
- (BOOL)waitForBarrier;
- (BOOL)waitForBarrierWithTimeout:(unsigned long long)a0;

@end
