@class NSSet;

@interface _GCDevicePhysicalInputButtonElementParameters : _GCDevicePhysicalInputElementParameters {
    char _analog;
    float _pressedThreshold;
    NSSet *_sources;
    unsigned long long _eventPressedValueField;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
