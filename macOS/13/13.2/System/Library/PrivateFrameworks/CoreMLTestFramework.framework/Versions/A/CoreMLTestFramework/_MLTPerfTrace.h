@class NSMutableDictionary;

@interface _MLTPerfTrace : NSObject

@property (retain) NSMutableDictionary *perfTimeLogger;
@property (retain) NSMutableDictionary *measurementDicts;
@property (retain) NSMutableDictionary *numericMeasurements;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addNumericMeasurement:(id)a0 withLabel:(id)a1;
- (void)addMeasurementDict:(id)a0 withLabel:(id)a1;
- (id)startTimingMeasurementWithLabel:(id)a0;
- (id)stopTimingMeasurementWithLabel:(id)a0;
- (id)dumpAllMeasurements;

@end
