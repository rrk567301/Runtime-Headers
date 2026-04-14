@class NSSet;

@interface _GCDevicePhysicalInputTouchInputParameters : _GCDevicePhysicalInputViewParameters {
    float _touchedThreshold;
    NSSet *_sources;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
