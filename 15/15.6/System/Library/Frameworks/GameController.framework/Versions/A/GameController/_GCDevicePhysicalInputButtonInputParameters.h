@class NSSet;

@interface _GCDevicePhysicalInputButtonInputParameters : _GCDevicePhysicalInputViewParameters {
    char _analog;
    float _pressedThreshold;
    NSSet *_sources;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
