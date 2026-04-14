@class NSSet;

@interface _GCDevicePhysicalInputAxis2DInputParameters : _GCDevicePhysicalInputViewParameters {
    BOOL _analog;
    BOOL _canWrap;
    NSSet *_sources;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
