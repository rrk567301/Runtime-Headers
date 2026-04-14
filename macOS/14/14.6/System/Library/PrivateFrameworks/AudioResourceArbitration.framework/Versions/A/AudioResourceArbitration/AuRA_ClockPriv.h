@class NSString;

@interface AuRA_ClockPriv : AuRA_ObjectPriv <AuRA_Clock>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)sampleRate;
- (id)deviceUID;
- (unsigned int)transportType;
- (unsigned int)clockDomain;
- (unsigned int)inputLatency;
- (id)modelUID;
- (unsigned int)outputLatency;
- (id)clockSourceControl;
- (id)initWithClock:(struct weak_ptr<aura::Clock> { struct Clock *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)setSampleRate:(double)a0 error:(id *)a1;
- (id)supportedSampleRates;

@end
