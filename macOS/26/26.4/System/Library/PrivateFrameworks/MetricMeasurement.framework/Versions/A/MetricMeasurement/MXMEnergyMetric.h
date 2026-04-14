@class NSSet, MXMSampleData, MXMInstrument;

@interface MXMEnergyMetric : MXMMetric {
    MXMSampleData *_collectedData;
}

@property (class, readonly, copy, nonatomic) MXMEnergyMetric *currentProcess;

@property (readonly, nonatomic) NSSet *processNames;
@property (readonly, copy, nonatomic) MXMInstrument *instrument;

- (void).cxx_destruct;
- (BOOL)prepareWithOptions:(id)a0 error:(id *)a1;
- (BOOL)_shouldAlwaysWrapInProxy;
- (BOOL)_shouldConstructProbe;
- (void)didStopAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 stopDate:(id)a2;
- (BOOL)harvestData:(id *)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 filter:(id)a1;
- (id)initWithProcessNames:(id)a0;
- (void)willStartAtEstimatedTime:(unsigned long long)a0;

@end
