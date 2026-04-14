@class NSMutableDictionary, NSObject;
@protocol OS_os_log, CBClockSource, OS_dispatch_source, OS_dispatch_queue;

@interface CBRampManager : NSObject <CBRampManagerI> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_source> *_clockTimer;
    NSMutableDictionary *_ramps;
    NSMutableDictionary *_eternalRamps;
    BOOL _activated;
    float _requiredFrequency;
    double _sMachTimebaseFactor;
    id<CBClockSource> _frameLink;
}

@property (copy) id /* block */ clockHandler;
@property (copy) id /* block */ rampDoneCallback;
@property (readonly, nonatomic) BOOL enableFrameSynchronisation;
@property BOOL liveUpdates;

- (void)stopTimer;
- (void)dealloc;
- (void)cancel;
- (id)init;
- (id)copyStatusInfo;
- (void)activate;
- (float)remainingLength;
- (void)disableClocking;
- (void)enableClocking;
- (void)generateRamp;
- (BOOL)hasAnyActiveRamp;
- (BOOL)hasRampRunningForIdentifier:(id)a0;
- (id)initWithClockSource:(id)a0;
- (id)initWithClockSource:(id)a0 andDisplayId:(unsigned long long)a1;
- (id)initWithClockSource:(id)a0 andLogSubsystem:(id)a1;
- (id)insertNewEternalRampFrequency:(float)a0 startRamp:(BOOL)a1 identifier:(id)a2 progressCallback:(id /* block */)a3;
- (id)insertNewLinearRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4;
- (id)insertNewLinearRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 startRamp:(BOOL)a4 identifier:(id)a5;
- (id)insertNewRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 identifier:(id)a4 progressCallback:(id /* block */)a5;
- (id)insertNewRampOrigin:(float)a0 target:(float)a1 length:(float)a2 frequency:(float)a3 startRamp:(BOOL)a4 identifier:(id)a5 progressCallback:(id /* block */)a6;
- (void)insertRamp:(id)a0;
- (void)insertRamp:(id)a0 identifier:(id)a1;
- (void)insertRamp:(id)a0 identifier:(id)a1 reevaluate:(BOOL)a2;
- (void)insertRamp:(id)a0 identifier:(id)a1 reevaluate:(BOOL)a2 eternal:(BOOL)a3;
- (id)rampForIdentifier:(id)a0;
- (void)reevaluateClocking;
- (void)removeAllRamps;
- (void)removeRampWithIdentifier:(id)a0;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)setTimer;
- (void)startRamps;
- (void)timerClockHandler;
- (void)updateRampsForTimestamp:(double)a0;

@end
