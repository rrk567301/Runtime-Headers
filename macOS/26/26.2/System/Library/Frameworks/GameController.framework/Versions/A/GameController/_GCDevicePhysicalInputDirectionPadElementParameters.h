@class NSSet;

@interface _GCDevicePhysicalInputDirectionPadElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _analog;
    NSSet *_xySources;
    NSSet *_xSources;
    NSSet *_ySources;
    NSSet *_upSources;
    NSSet *_leftSources;
    NSSet *_downSources;
    NSSet *_rightSources;
    unsigned long long _eventUpValueField;
    unsigned long long _eventDownValueField;
    unsigned long long _eventLeftValueField;
    unsigned long long _eventRightValueField;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
