@class NSSet;

@interface _GCGearShifterElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _patternShifter;
    NSSet *_sources;
    unsigned long long _eventShifterValueField;
    struct _NSRange { unsigned long long location; unsigned long long length; } _positionRange;
}

+ (Class)viewClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
