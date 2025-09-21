@interface RTTripLocationPropagator : NSObject {
    BOOL _recordDebuggingDataInFile;
}

- (id)initWithDefaultsManager:(id)a0;
- (id)getLocationArrayWithLocationManager:(id)a0;
- (id)getLocationExtendedArrayWithLocationManager:(id)a0;
- (id)getPropagatedLocationUsingLocations:(id)a0 atDistance:(double)a1;
- (id)getPropagatedLocationWithLocationManager:(id)a0 atDistance:(double)a1;

@end
