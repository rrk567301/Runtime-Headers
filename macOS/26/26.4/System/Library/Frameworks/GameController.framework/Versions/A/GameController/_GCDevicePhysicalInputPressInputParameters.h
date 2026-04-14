@class NSSet;

@interface _GCDevicePhysicalInputPressInputParameters : _GCDevicePhysicalInputViewParameters {
    BOOL _analog;
    float _pressedThreshold;
    NSSet *_sources;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
