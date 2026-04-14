@class NSSet;

@interface _GCDevicePhysicalInputTouchInputParameters : _GCDevicePhysicalInputViewParameters {
    float _touchedThreshold;
    NSSet *_sources;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
