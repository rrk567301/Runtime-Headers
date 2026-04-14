@class NSSet;

@interface _GCDevicePhysicalInputPressInputParameters : _GCDevicePhysicalInputViewParameters {
    BOOL _analog;
    float _pressedThreshold;
    NSSet *_sources;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
