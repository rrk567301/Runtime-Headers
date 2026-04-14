@class NSString, NSDate, MXMInstrument, NSObject;
@protocol OS_dispatch_semaphore;

@interface MXMOSSignpostMetric : MXMMetric {
    NSDate *_startDate;
    NSDate *_stopDate;
    unsigned long long _startMachContTime;
    unsigned long long _stopMachContTime;
    NSObject<OS_dispatch_semaphore> *_startDate_semaphore;
    NSObject<OS_dispatch_semaphore> *_stopDate_semaphore;
}

@property (readonly, copy, nonatomic) MXMInstrument *instrument;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *processName;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_constructProbe;
- (unsigned long long)_sampleMode;
- (BOOL)_shouldAlwaysWrapInProxy;
- (BOOL)_shouldConstructProbe;
- (BOOL)_shouldNeverWrapInProxy;
- (void)didStartAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 startDate:(id)a2;
- (void)didStartAtTime:(unsigned long long)a0 startDate:(id)a1;
- (void)didStopAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 stopDate:(id)a2;
- (void)didStopAtTime:(unsigned long long)a0 stopDate:(id)a1;
- (id)initWithSubsystem:(id)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 processName:(id)a3;

@end
