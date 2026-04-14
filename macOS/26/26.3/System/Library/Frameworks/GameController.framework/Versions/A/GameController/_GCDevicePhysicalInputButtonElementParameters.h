@class NSSet, _GCDevicePhysicalInputTouchInputParameters, _GCDevicePhysicalInputSensorInputParameters;

@interface _GCDevicePhysicalInputButtonElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _analog;
    float _pressedThreshold;
    NSSet *_sources;
    _GCDevicePhysicalInputTouchInputParameters *_touch;
    _GCDevicePhysicalInputSensorInputParameters *_force;
    unsigned long long _eventPressedValueField;
    unsigned long long _eventAnalogPressValueField;
    unsigned long long _eventTouchValueField;
    unsigned long long _eventForceValueField;
}

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
