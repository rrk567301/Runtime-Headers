@class NSSet;

@interface _GCDevicePhysicalInputCapacitiveDirectionPadElementParameters : _GCDevicePhysicalInputClickableDirectionPadElementParameters {
    NSSet *_touchedSources;
    unsigned long long _eventTouchedValueField;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
