@class CBDisplayLink, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface CBRampManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_clockTimer;
    float _requiredFrequency;
    NSMutableDictionary *_ramps;
    NSObject<OS_os_log> *_logHandle;
    BOOL _activated;
    double _sMachTimebaseFactor;
    CBDisplayLink *_displayLink;
    unsigned long long _displayId;
}

@property (copy) id /* block */ clockHandler;
@property (readonly, nonatomic) BOOL enableFrameSynchronisation;

- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)activate;
- (void)stopTimer;
- (id)copyStatusInfo;
- (id)initWithDisplayId:(unsigned long long)a0;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)timerClockHandler;
- (void)enableClocking;
- (void)disableClocking;
- (void)reevaluateClocking;
- (void)insertRamp:(id)a0 identifier:(id)a1;
- (id)insertNewRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4 progressCallback:(id /* block */)a5;
- (id)insertNewLinearRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4;
- (void)removeRampWithIdentifier:(id)a0;
- (void)removeAllRamps;
- (BOOL)hasRampRunningForIdentifier:(id)a0;
- (void)setTimer;
- (void)updateRampsForTimestamp:(double)a0;
- (id)rampForIdentifier:(id)a0;

@end
