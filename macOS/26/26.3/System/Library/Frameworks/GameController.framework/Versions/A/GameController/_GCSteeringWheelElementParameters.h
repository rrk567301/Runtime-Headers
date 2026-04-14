@class NSSet;

@interface _GCSteeringWheelElementParameters : _GCDevicePhysicalInputElementParameters {
    float _maximumDegreesOfRotation;
    NSSet *_sources;
    unsigned long long _eventRotationValueField;
}

+ (Class)viewClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
