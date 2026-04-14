@class NSSet;

@interface _GCDevicePhysicalInputAxisInputParameters : _GCDevicePhysicalInputViewParameters {
    BOOL _analog;
    BOOL _canWrap;
    NSSet *_sources;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
