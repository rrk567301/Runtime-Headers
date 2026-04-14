@interface LSSSampleBuffer : NSObject {
    struct { double time; void /* unknown type, empty encoding */ direction; struct { void /* unknown type, empty encoding */ vector; } referenceOrientation; float intensity; unsigned int activityLevel; } _samples[32];
    unsigned long long _front;
    unsigned long long _back;
}

- (id)init;

@end
