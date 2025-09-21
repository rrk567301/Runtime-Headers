@class NSSet, _GCDevicePhysicalInputPressInputParameters, _GCDevicePhysicalInputTouchInputParameters;

@interface _GCDevicePhysicalInputJoystickElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _analog;
    float _directionPressedThreshold;
    NSSet *_xySources;
    NSSet *_xSources;
    NSSet *_ySources;
    NSSet *_upSources;
    NSSet *_leftSources;
    NSSet *_downSources;
    NSSet *_rightSources;
    _GCDevicePhysicalInputPressInputParameters *_press;
    _GCDevicePhysicalInputTouchInputParameters *_touch;
    unsigned long long _eventXValueField;
    unsigned long long _eventYValueField;
    unsigned long long _eventPressValueField;
    unsigned long long _eventTouchValueField;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
