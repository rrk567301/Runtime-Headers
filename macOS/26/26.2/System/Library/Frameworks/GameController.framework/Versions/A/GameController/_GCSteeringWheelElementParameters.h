@class NSSet;

@interface _GCSteeringWheelElementParameters : _GCDevicePhysicalInputElementParameters {
    float _maximumDegreesOfRotation;
    NSSet *_sources;
    unsigned long long _eventRotationValueField;
}

+ (Class)viewClass;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
