@class NSSet;

@interface _GCDevicePhysicalInputAxis2DInputParameters : _GCDevicePhysicalInputViewParameters {
    char _analog;
    char _canWrap;
    NSSet *_sources;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
