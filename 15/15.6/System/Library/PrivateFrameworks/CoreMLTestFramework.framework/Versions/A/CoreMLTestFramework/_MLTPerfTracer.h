@class NSMutableDictionary;

@interface _MLTPerfTracer : NSObject

@property (retain) NSMutableDictionary *_timingMeasurements;
@property (retain) NSMutableDictionary *_cpuMemoryMeasurements;
@property (retain) NSMutableDictionary *_energyMeasurements;

- (id)init;
- (void).cxx_destruct;
- (id)allEnergyMeasurements:(id *)a0;
- (id)allMemoryMeasurementsForComputeUnit:(long long)a0 error:(id *)a1;
- (id)allTimingMeasurements:(id *)a0;
- (double)calculateMean:(id)a0;
- (double)calculateVariance:(id)a0;
- (id)energyMeasurementWithLabel:(id)a0 error:(id *)a1;
- (id)memoryMeasurementsForComputeUnit:(long long)a0;
- (id)memoryMeasurementsForComputeUnit:(long long)a0 label:(id)a1 error:(id *)a2;
- (char)startEnergyMeasurementWithLabel:(id)a0 error:(id *)a1;
- (char)startMemoryMeasurementWithLabel:(id)a0 computeUnit:(long long)a1 error:(id *)a2;
- (char)startTimingMeasurementWithLabel:(id)a0 error:(id *)a1;
- (char)stopEnergyMeasurementWithLabel:(id)a0 error:(id *)a1;
- (char)stopMemoryMeasurementWithLabel:(id)a0 computeUnit:(long long)a1 error:(id *)a2;
- (char)stopTimingMeasurementWithLabel:(id)a0 error:(id *)a1;
- (id)timingMeasurementWithLabel:(id)a0 error:(id *)a1;

@end
